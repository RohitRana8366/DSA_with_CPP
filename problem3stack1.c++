 #include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
    stack<int> s;
    int size = 8;
    int arr[8] = {2,3,5,-4,6,-2,-8,9};

    cout << "Original Array: ";
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (s.empty())
            s.push(arr[i]);

        else if (arr[i] >= 0)
        {
            if (s.top() >= 0)
                s.push(arr[i]);
            else
                s.pop();
        }
        else
        {
            if (s.top() < 0)
                s.push(arr[i]);
            else
                s.pop();
        }
    }

    
    stack<int> temp = s;
    cout << "Remaining elements in stack: ";

    vector<int> ans(temp.size());
    int i = temp.size() - 1;

    while(!temp.empty())
    {
        ans[i--] = temp.top();
        temp.pop();
    }


    cout << endl;

    return 0;
}