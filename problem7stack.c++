//print bracket number
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack <int> st;
    int num=1;
    string s;
    cout<<"enter your input=";
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(')
        {
            st.push(num);
            cout<< num<<"";
            num++;
        }
        else{
            cout<<st.top();
            st.pop();
        }
        
    }
    return 0;
}