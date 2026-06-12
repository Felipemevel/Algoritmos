#include <iostream>

class ll_int {
private:
    struct ll_int_node {
        int value;
        ll_int_node *next;
    };
    ll_int_node *head, *tail;
public:
    ll_int() {
        this->head = nullptr;
        this->tail = nullptr;
    }
    ~ll_int() {
        while (this->head != nullptr) {
            this->pop_front();
        }
    }
    void push_front(int value) {
        ll_int_node *new_node = new ll_int_node;

        new_node->value = value;
        new_node->next = this->head;

        if (this->head == nullptr) {
            this->tail = new_node;
        }
        this->head = new_node;
    }
    void push_back(int value) {
        ll_int_node *new_node = new ll_int_node;

        new_node->value = value;
        new_node->next = nullptr;

        if (this->tail == nullptr) {
            this->head = new_node;
        } else {
            this->tail->next = new_node;
        }
        this->tail = new_node;
    }
    void pop_front() {
        if (this->head == nullptr) {
            std::cout << "Lista já vazia!" << std::endl;
            return;
        }
        ll_int_node *temp = this->head;
        if (this->head == this->tail) {
            this->tail = nullptr;
        }
        this->head = this->head->next;
        delete temp;
    }
    void pop_back() {
        if (this->head == nullptr) {
            return;
        }
        if (this->tail == this->head) {
            delete this->head;
            this->head = nullptr;
            this->tail = nullptr;
            return;
        }
        ll_int_node *current = this->head;

        while (current->next != this->tail) {
            current = current->next;
        }
        current->next = nullptr;
        delete this->tail;
        this->tail = current;
    }
    int front() {

        if (this->head != nullptr) {
            return this->head->value;
        } else {
            return -1;
        }
    }
    int back() {
        if (this->tail != nullptr) {
            return this->tail->value;
        } else {
            return -1;
        }
    }
    int sum() {
        int sum = 0;
        ll_int_node *current = this->head;

        while (current != nullptr) {
            sum += current->value;
            current = current->next;
        }
        return sum;
    }
    int size() {
        int ans = 0;

        if (this->head == nullptr) {
            return 0;
        }
        ll_int_node *current = this->head;

        while(current != nullptr) {
            ans += 1;
            current = current->next;
        }
        return ans;
    }
    int get_at(int index) {
        if (this->head == nullptr) {
            return -1;
        }
        ll_int_node *current = this->head;

        for (int i = 0; i < index; i++) {
            current = current->next;
            if (current == nullptr) {
                return -1;
            }
        }
        return current->value;
    }

    void set_at(int index, int value) {
        if (this->head == nullptr) {
            return;
        }
        ll_int_node *current = this->head;

        for (int i = 0; i < index; i++) {
            current = current->next;
            if (current == nullptr) {
                return;
            }
        }
        current->value = value;
    }
    void insert_at(int x, int value) {
        ll_int_node *new_node = new ll_int_node;
        new_node->value = value;

        ll_int_node *current = this->head;
        while (current->next != nullptr) {
            if (current->next->value == x) {
                current = current->next;
                new_node->next = current->next;
                current->next = new_node;
                return;

            }
            current = current->next;
        }
        this->tail->next = new_node;
        new_node->next = nullptr;
    }
    bool remove(int value) {
        ll_int_node *current = this->head;
        ll_int_node *temp = nullptr;

        if (this->head == nullptr) {
            return false;
        }
        if (this->head->value == value) {
            temp = this->head;
            current = this->head->next;
            this->head = current;
            delete temp;
            return true;
        }
        while (current != nullptr && current->next != nullptr) {
            if (current->next->value == value) {
                temp = this->tail;
                current->next = temp->next;
                if (temp == this->tail) {
                    this->tail = current;
                }
                delete temp;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    bool remove_at(int index) {
        ll_int_node *current = this->head;
        ll_int_node *temp = nullptr;

        if (this->head == nullptr) {
            return false;
        }
        if (index == 0) {
            temp = this->head;
            current = this->head->next;
            this->head = current;
            if (this->head == nullptr) {
                this->tail= nullptr;
            }
            delete temp;
            return true;
        }
        for (int i = 0; i < index-1; i++) {
            if (current->next == nullptr) {
                return false;
            }
            current = current->next;
        }
        if (current->next == nullptr) {
            return false;
        }

        temp = current->next;
        current->next = temp->next;
        if (temp == this->tail) {
            this->tail = current;
        }
        delete temp;
        return true;

    }
};

int main() {
    ll_int *vetor = new ll_int;

    vetor->push_back(10);
    vetor->push_back(20);
    vetor->push_back(30);
    vetor->push_front(40);
    vetor->set_at(2, 50);

    vetor->remove_at(4);

    std::cout << "[ ";
    for (int i = 0; i < vetor->size(); i++) {
        std::cout << vetor-> get_at(i) << " ";
    }
    std::cout << "]";
    return 0;
}