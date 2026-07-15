#include "ordenacao.hpp"
#include <vector>

#include <bits/forward_list.h>

/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int t){
    for (unsigned int i = 1; i < t; i++) {
        if (a[i-1] > a[i]) {
            return false;
        }
    }
    return true;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int t){

    for (unsigned int i = 0; i < t; i++) {
        for (unsigned int j = i+1; j < t; j++) {
            if (a[j] < a[i]) {
                std::swap(a[j], a[i]);
            }
        }
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int t) {
    for (unsigned int i = 1; i < t; i++) {
        int chave = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > chave) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = chave;
    }
}

/* TODO: Implementar função */
void merge(int a[], unsigned int l, unsigned int m, unsigned int r) {
    unsigned int n1 = m - l + 1;
    unsigned int n2 = r - m;

    std::vector<int> L(n1), R(n2);

    for (unsigned int i = 0; i < n1; i++) L[i] = a[l + i];
    for (unsigned int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    unsigned int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++; k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++; k++;
    }
}

void merge_sort_rec(int a[], unsigned int l, unsigned int r) {
    if (l < r) {
        unsigned int m = l + (r - l) / 2;
        merge_sort_rec(a, l, m);
        merge_sort_rec(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void merge_sort(int a[], unsigned int t) {
    if (t > 1) {
        merge_sort_rec(a, 0, t - 1);
    }
}
