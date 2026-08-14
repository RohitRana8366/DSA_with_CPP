class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i <= n-k; i++) {
            
            int total = INT_MIN;

            for(int j = i; j < i+k; j++) {
                total = max(total, nums[j]);
            }

            ans.push_back(total);
        }

        return ans;
    }
};