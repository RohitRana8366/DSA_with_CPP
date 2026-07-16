#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> st1;
    stack<int> st2;

public:

    
    bool empty() {
        return st1.empty() && st2.empty();
    }

    
    void push(int x) {
        st1.push(x);
    }

    
    int front() {
        if (empty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        return st2.top();
    }

    
    void pop() {
        if (empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        st2.pop();
    }
};

int main() {

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;

    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    q.push(40);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}