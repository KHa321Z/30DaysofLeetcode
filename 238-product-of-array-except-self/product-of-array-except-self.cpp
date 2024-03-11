class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int zeroCounter = 0;

        for (int i = 0; i < nums.size(); i++)
            if (zeroCounter < 2)
                if (!nums[i])
                    zeroCounter++;
                else
                    product *= nums[i];
            else {
                product = 0;
                break;
            }

        if (zeroCounter >= 2)
            return vector<int> (nums.size(), 0);

        vector<int> result(nums.size(), product);

        for (int i = 0; i < nums.size(); i++)
            if (!zeroCounter)
                result[i] /= nums[i];
            else
                if (nums[i])
                    result[i] = 0;

        return result;
        
    }
};