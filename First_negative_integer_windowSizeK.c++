#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> firstNegative(int arr[], int n, int k)
{
    queue<int> q;      // stores indices of negative numbers
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        // Push index if current element is negative
        if (arr[i] < 0)
            q.push(i);

        // Window starts after reaching size k
        if (i >= k - 1)
        {
            // Remove indices that are out of the current window
            while (!q.empty() && q.front() < i - k + 1)
                q.pop();

            // Store answer
            if (q.empty())
                ans.push_back(0);
            else
                ans.push_back(arr[q.front()]);
        }
    }

    return ans;
}

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    vector<int> ans = firstNegative(arr, n, k);

    for (int x : ans)
        cout << x << " ";

    return 0;
}