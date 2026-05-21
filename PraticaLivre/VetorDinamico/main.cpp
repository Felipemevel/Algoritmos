#include <iostream>

struct vetor {

private:
    int data[1000];
    unsigned int size_;
    unsigned int capacity_;

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
    int get_at(unsigned int index) {
        if (index >= this->size_) {
            std::cout << "Index out of bounds" << std::endl;
            return -1;
        }
        return this->data[index];
    }
    void pop_back() {
        if (this->size_ > 0) {
            this->size_--;
        }
    }
    unsigned int size() {
        return this->size_;
    }

};


int main() {

    vetor v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.pop_back();
    v.push_back(70);
    v.pop_back();
    v.push_back(8);

    std::cout << v.size() << std::endl;
    std::cout << v.get_at(5) << std::endl;

    return 0;
}
