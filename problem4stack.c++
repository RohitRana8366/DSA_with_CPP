#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){

        string arr[] = {"ab", "ac", "da", "da", "ac", "db", "ea"};
        stack<string>st;
        st.push(arr[0]);
        for (int i = 1; i <7; i++)
        {
            
            if (st.top() == arr[i])
            {
                st.pop();
            }
            else {

                   st.push(arr[i]);
                 }

    
        }
        cout<<"size of stack:"<<st.size()<<endl;
        while (!st.empty())
        {
            cout<<st.top()<<endl;
            st.pop();
        }
        
            }
             