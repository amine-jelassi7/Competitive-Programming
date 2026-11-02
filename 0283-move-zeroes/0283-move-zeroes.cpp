class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int zero_count = 0;
        for (int num : nums) num == 0 ? (void)zero_count++ : temp.push_back(num);
        while (zero_count--) temp.push_back(0);
        nums = temp;
    }
};