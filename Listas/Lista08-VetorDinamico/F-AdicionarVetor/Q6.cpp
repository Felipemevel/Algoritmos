#include <iostream>

struct vetor {
private:
    int data[1000];
    unsigned int capacity_;
    unsigned int size_;

public:
    vetor() {
        this->capacity_ = 0;
        this->size_ = 0;
    }
    vetor(unsigned int capacity, unsigned int size) {
        this->capacity_ = capacity;
        this->size_ = size;
    }
    void push_back(int data) {
        this->data[this->size_] = data;
        this->size_++;
    }
    void showVector() {
        std::cout << "[ ";
        for (int i = 0; i < size_; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << "]" << std::endl;;
    }
    unsigned int size() {
        return this->size_;
    }
    void remove_at(unsigned int index) {
        if (index >= size_) {
            std::cout << "Index out of bounds!";
            return;
        }
        for (unsigned int i = index; i < size_; i++) {
            data[i] = data[i+1];
        }
        size_--;
        if (size_ < (capacity_/4)) {
            this->capacity_ = (capacity_/2);
        }
    }
    void remove_value(int value) {
        unsigned int index;
        bool found = false;
        for (int i = 0; i < size_; i++) {
            if (data[i] == value) {
                index = i;
                remove_at(index);
                break;
            }
        }
    }
    int quantidade_iguais(const vetor&other) {
        int contador = 0;
        for (int i = 0; i < size_; i++) {
            for (int j = 0; j < other.size_; j++) {
                if (data[i] == other.data[j]) {
                    contador += 1;
                    break;
                }
            }
        }
        return contador;
    }
    void push_back_vector(const vetor &other) {
        for (int i = 0; i < other.size_; i++) {
            push_back(other.data[i]);
        }
    }
};

int main() {

    vetor v;
    vetor v2;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.showVector();
    v.remove_at(2);
    v.showVector();
    v.remove_value(10);
    v.showVector();
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(20);

    v.push_back_vector(v2);
    v.showVector();

    return 0;
}
