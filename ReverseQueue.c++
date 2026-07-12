#include<iostream> 
#include<queue>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();

    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    //print to see
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    

}
