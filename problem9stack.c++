//Next greater element problem

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=10;
    int arr[10]={8,6,4,7,4,9,10,8,12,15};
    vector<int>ans(n,-1);
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                ans[i]=arr[j];
                break;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

}