#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow. Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed " << value << " into the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow." << endl;
            return;
        }
        int value = arr[top--];
        cout << "Popped " << value << " from the stack." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);
    int choice, value;

    while (true) {
        cout << "Enter your choice:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Quit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push onto the stack: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

