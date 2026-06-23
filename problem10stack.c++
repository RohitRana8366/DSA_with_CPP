//solve next smaller element by the stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n = 10;
    int qes[10] = {8,6,4,7,4,9,10,8,12,15};
    int ans[10];

    stack<int> st;

    vector<int> arr(qes, qes + n);   

    for(int i = 0; i < n; i++)
        ans[i] = -1;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}