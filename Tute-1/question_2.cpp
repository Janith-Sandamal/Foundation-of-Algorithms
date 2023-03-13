//
// Created by Janith Sandamal on 3/13/2023.
//
class StackX {
private:
    int top;
    int maxSize;
    int* stackArr;

public:
    StackX(int size) {
        top = -1;
        maxSize = size;
        stackArr = new int[maxSize];
    }

    ~StackX() {
        delete[] stackArr;
    }

    void push(int no) {
        if (!isFull()) {
            top++;
            stackArr[top] = no;
        } else {
            std::cout << "Stack is full" << std::endl;
        }
    }

    int pop() {
        if (!isEmpty()) {
            int popped = stackArr[top];
            top--;
            return popped;
        } else {
            std::cout << "Stack is empty" << std::endl;
            return -1; // or throw an exception
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == maxSize - 1);
    }

    int getCount() {
        return top + 1;
    }
};
