class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        vector<int> result (nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
            result[i] = (product *= nums[i - 1]);

        product = 1;

        for (int i = nums.size() - 2; i >= 0; i--)
            result[i] *= (product *= nums[i + 1]);

        return result;
        
    }
};