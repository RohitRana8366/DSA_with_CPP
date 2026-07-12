#include<iostream> 
#include<queue>
#include<stack>
using namespace std;
int main(){
    int k=3,n;
    stack<int>st;
    queue<int>q;
    q.push(3);
    q.push(7);
    q.push(10);
    q.push(13);
    q.push(8);
    q.push(5);
    q.push(4);
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    n=q.size();
    while (!st.empty()) 
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        q.push(q.front());
        q.pop();

    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;

    
}