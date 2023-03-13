//
// Created by Janith Sandamal on 3/13/2023.
//
class StackX {
private:
    int top;
    int maxSize;
    int* stackArr;

public:
    // Default constructor that creates a stack with a fixed capacity of 10 elements
    StackX() {
        stArr = new double[10];
        maxSize = 10;
        top = -1;
    }

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

/*
 i) One disadvantage of having the above constructor that initializes the stack's maximum capacity to a fixed value of 10 is that it limits the flexibility of the class.
 If the maximum capacity needs to be increased or decreased at runtime,
 the class needs to be modified and recompiled,
 which can be a tedious and error-prone process.

ii) To avoid the above disadvantage,
 we can modify the constructor to take a parameter that specifies the maximum capacity of the stack.
 Here's an updated constructor that takes an integer argument capacity and initializes the stack's maximum capacity and array size accordingly:


public StackX(int capacity) {
    stArr = new double[capacity];
    maxSize = capacity;
    top = -1;
}

With this constructor, the maximum capacity of the stack can be specified at runtime, allowing for greater flexibility and reusability of the class.


 */