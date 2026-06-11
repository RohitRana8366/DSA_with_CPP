//n-1 iterations
//compare adjaency elemetns
//larger element push in the last side by swapping
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int n = 5;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    
    for (int i = 0; i < n-1; i++)           
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
