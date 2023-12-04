#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack overflow\n";
            return;
        }

        arr[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow\n";
            std::exit(1);
        }

        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            std::exit(1);
        }

        return arr[top];
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;

    std::cout << "Popped element: " << stack.pop() << std::endl;
    std::cout << "Popped element: " << stack.pop() << std::endl;

    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
