#include<bits/stdc++.h>
using namespace std;

class myQueue {
public:
    int *arr;
    int capacity;
    int size;

    myQueue(int n) {
        capacity = n;
        size = 0;
        arr = new int[capacity];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int x) {
        if (isFull()) return;
        arr[size] = x;
        size++;
    }

    void dequeue() {
        if (isEmpty()) return;

        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }

        size--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[0];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[size - 1];
    }
};;

int  main(){
    myQueue m(5);
    m.enqueue(1);
    m.enqueue(2);
    m.enqueue(3);
    m.enqueue(4);
    m.enqueue(5);
    cout << m.getFront() << endl;
    cout << m.getRear() << endl;
    m.dequeue();
    cout << m.getFront() << endl;
    cout << m.getRear() << endl;    
}