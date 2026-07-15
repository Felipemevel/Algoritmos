set -e

EXEC=./teste_ordenacao
TESTES_DIR=.
RESULTADOS_DIR=resultados

if [ ! -x "$EXEC" ]; then
    echo "Erro: $EXEC não encontrado ou não é executável."
    echo "Compile primeiro com: g++ -Wall -o teste_ordenacao teste_ordenacao.cpp ordenacao.cpp"
    exit 1
fi

mkdir -p "$RESULTADOS_DIR"

declare -A METODOS=( [s]="selecao" [i]="insercao" [m]="merge" )

for caso in "$TESTES_DIR"/caso*; do
    [ -d "$caso" ] || continue
    nome_caso=$(basename "$caso")
    csv="$RESULTADOS_DIR/${nome_caso}.csv"
    echo "n,metodo,tempo_us" > "$csv"

    echo "==> Processando $nome_caso"

    for arquivo in "$caso"/exemplo-*.txt; do
        [ -f "$arquivo" ] || continue
        for opt in s i m; do
            metodo="${METODOS[$opt]}"

            # A saída de tempo/erro vai para stderr; a saída ordenada (se
            # descomentada) iria para stdout. Aqui descartamos stdout e
            # filtramos a linha de tempo em stderr.
            linha=$("$EXEC" -$opt < "$arquivo" 2>&1 1>/dev/null | grep "Tempo de ordenação")

            if [ -z "$linha" ]; then
                echo "  [aviso] Sem saída de tempo para $arquivo (-$opt). Pulando."
                continue
            fi

            n=$(echo "$linha" | grep -oP '^\d+')
            tempo=$(echo "$linha" | grep -oP 'ordenação: \K[0-9]+')

            echo "${n},${metodo},${tempo}" >> "$csv"
        done
    done

    echo "    -> salvo em $csv"
done

echo ""
echo "Todos os testes concluídos. CSVs em '$RESULTADOS_DIR/'."