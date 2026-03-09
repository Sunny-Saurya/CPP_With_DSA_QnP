#include<bits/stdc++.h>
using namespace std;

class myStack{
    int *arr; // array to store the element
    int capacity; // max capacity of the stack
    int top; // top element

    public:

    myStack(int cap){
        top = -1;
        capacity = cap;
        arr = new int[capacity];
    }

    void push(int x){
        if(top == capacity - 1){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop(){
        if(top == -1){
            cout << " Stack is Underflow \n";
            return 0;
        }
        return  arr[--top];
    }

    int peek(){
        if(top == -1){
            cout << " Stack is Empty \n";
            return 0;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == capacity-1;
    }
};

int main(){

    myStack st(10);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

     // popping one element
    cout << "Popped: " << st.pop() << "\n";

    // checking top element
    cout << "Top element: " << st.peek() << "\n";

    // checking if stack is empty
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << "\n";

    // checking if stack is full
    cout << "Is stack full: " << (st.isFull() ? "Yes" : "No") << "\n";

    return 0;
}