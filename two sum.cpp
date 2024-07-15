class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {};
        }

        unordered_map<int, int>mpp;

        for (int i=0; i<nums.size(); i++) {
            mpp[nums[i]] = i;
        }

        for (int i=0; i<nums.size(); i++) {
            int rem = target - nums[i];
            if (mpp.count(rem) && mpp[rem] != i) {
                return {i, mpp[rem]};
            }
        }

        return {};
    }
};
