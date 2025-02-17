#include <iostream>

const int MAX_SIZE = 100;

class Stack {
private:
    int top;
    int item[MAX_SIZE];

public:
    // Constructor
    Stack() : top(-1) {}

    // isEmpty function
    bool isEmpty() const {
        return top == -1;
    }

    // isFull function
    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    // pop function
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty" << std::endl;
        } else {
            top--;
        }
    }

    // push function
    void push(int elem) {
        if (isFull()) {
            std::cout << "Stack is full" << std::endl;
        } else {
            item[++top] = elem;
        }
    }

    // print function
    void print() const {
        for (int i = top; i >= 0; i--) {
            std::cout << item[i] << std::endl;
        }
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(6);
    s.push(10);
    s.push(8);
    s.push(9);
    s.pop();
    s.print();

    return 0;
}
