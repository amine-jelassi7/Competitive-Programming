
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        for(int i=0;i<n;i++)
        {
            if(i!=nums[i]) return i;
        }
        return n;
    }
}