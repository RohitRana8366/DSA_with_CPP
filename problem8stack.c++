//print minimum at top
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>st;
    int arr[4]={5,3,6,2};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>arr[i+1])    
        {
            st.push(arr[i+1]);
        }
        else{
            st.push(arr[i]);
        }
    }
    cout<<"minimum at pop=>"<<st.top();
    return 0;
    


}