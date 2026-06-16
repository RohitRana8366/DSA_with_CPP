#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string arr[10];
    stack<string> st;

    string input;
    cin >> input;   

    for(int i = 0; i < 10; i++)
    {
        arr[i] = input[i];   
    }

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == "(")
        {
            st.push(arr[i]);
        }
        else if(arr[i] == ")")
        {
            if(st.empty())
            {
                cout << "Invalid";
                return 0;
            }
            st.pop();
        }
    }

    cout << (st.empty() ? "Valid" : "Invalid");

    return 0;
}