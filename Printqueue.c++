//print queue with the help of vector with holding queue element in the queue
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        ans.push_back(q.front());
        q.pop();

    }
    for (int i = 0; i < ans.size(); i++)
    {
        q.push(ans[i]);
    }
    
    
    
}