#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n=8;
    int arr[n]={4,13,11,5,9,7,8,6};
    stack<int>st;
    vector<int>ans(n,-1);
    for (int i = n-1; i >=0; i--)
    {
            while (!st.empty()&&arr[st.top()]>arr[i])
            {
                ans[st.top()]=arr[i];
                st.pop();

            }
            st.push(i);    
    }
   
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

}