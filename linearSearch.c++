#include<iostream>
using namespace std;
int main(){
   int arr[]={4,2,7,8,2,1,5};
   int size=7;
   int target=80;
   for (int i = 0; i < size; i++)
   {
    if (arr[i]==target)
    {
        cout<<i;
        return 0;
    }
    
   }
   cout<<"invalid target" ;
   

}  