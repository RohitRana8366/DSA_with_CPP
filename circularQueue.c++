#include<iostream>
using namespace std;

class queue
{
    int *arr;
    int front, rear, size;

public:

    queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool isempty()
    {
        return front == -1;
    }

    bool isfull()
    {
        return (rear+1)%size==front;
    }

    void push(int x)
    {
        if(isfull())
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }

        if(isempty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = x;
        cout<<"Pushed "<<x<<endl;
    }

    void pop()
    {
        if(isempty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }

        cout<<"Popped "<<arr[front]<<endl;

        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front=(front+1)%size;
        }
    }

    int start()
    {
        if(isempty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }

        return arr[front];
    }
};

int main()
{
    queue q(5);

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);
    q.push(30);
    q.pop();
    q.push(85);
    cout<<"Front element = "<<q.start()<<endl;

    return 0;
}