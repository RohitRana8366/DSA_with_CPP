//Insert a element in bottom position of stack.
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    int x=2;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(8);
    stack<int>temp;
    while (!st.empty())
    {
        temp.push(st.top())  ;
        st.pop();

    }
    st.push(x);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
    while (!st.empty()) 
    {
         cout<<st.top()<<endl;
        st.pop(); 
    }
    
    return 0;
    
    


}