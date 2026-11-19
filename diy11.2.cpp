#include <iostream>
using namespace std;

template <class T>
class Queue {
    T a[5];
    int front = 0, rear = -1;

public:
    void enqueue(T x) {
        a[++rear] = x;
    }

    void dequeue() {
        if(front <= rear)
            front++;
    }

    void display() {
        cout << a[front] << endl;
    }
};

int main() {
    Queue<string> q;

    q.enqueue("Apple");
    q.enqueue("Mango");

    q.display();
    q.dequeue();
    q.display();

    return 0;
}