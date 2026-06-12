#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int value)
    {
        if(top == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = value;
        cout << value << " pushed into the stack\n";
    }
    void pop(int value)
    {
        if (top==-1)
        {
            cout<<"stack underflow\n";
            return;
        }
        else{
            
            cout<<"popeed "<<arr[top]<<" from the stack\n";
            top--;

        }
    }
    int peek()
    {
        if (top==-1)        
        {
            cout<<"empty stack\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
};

int main()
{
    stack s(5);

    s.push(-1);
    s.push(20);
    s.pop(20); 
    cout<<s.peek()<<endl;  ; 

    return 0;
}