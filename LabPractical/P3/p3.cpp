#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1)
        cout << "Stack Overflow\n";
    else {
        stack[++top] = value;
        cout << value << " pushed\n";
    }
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << stack[top--] << " popped\n";
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << stack[top] << endl;
}

void display() {
    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();
    return 0;
}