//reverse this string by using stack "hello"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> st;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }

    int i = 0;

    while (!st.empty())
    {
        s[i] = st.top();
        st.pop();
        i++;
    }

    cout << "Reverse string: " << s;

    return 0;
}