#include<iostream>
#include<queue>
#include<array>
using namespace std;
int main(){
    int tickets[5]={1,5,2,3,7};
    queue<int>q;
    int k=2;
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
        
    }
    int time=0;
    while (tickets[k]!=0)
    {
        tickets[q.front()]--;
        if (tickets[q.front()]>0)
        {
            q.push(q.front());
        }
        q.pop();
        time++;
    }
    cout<<"time count for k =>"<<time;
    return 0;
    
}