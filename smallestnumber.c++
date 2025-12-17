#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int nums[]={5,7,3,9,-1,10};
    int size=6;
    int smallest=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (nums[i]<smallest)
        {
            smallest=nums[i];
        }
        
    }
    cout<<"smallest="<<smallest<<endl;
    return 0;
    
}