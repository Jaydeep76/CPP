#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

class Stack {
private:
    int top; 
    int arr[MAX_SIZE]; 

public:
    Stack() {
        top = -1; 
    }

    
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push more elements." << endl;
            return;
        }
        arr[++top] = value;
    }

    
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow: Cannot pop from an empty stack." << endl;
            return;
        }
        top--; 
    }

    
    int peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return -1; 
        }
        return arr[top]; 
    }

    
    bool isEmpty() {
        return (top == -1); 
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    stack.pop();
    stack.pop(); 

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
