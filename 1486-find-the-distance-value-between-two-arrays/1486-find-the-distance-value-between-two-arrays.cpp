class Solution {
public:
    int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
        int ans = 0;
        std::sort(arr2.begin(), arr2.end());
        
        for (int a : arr1) {
            auto it = std::lower_bound(arr2.begin(), arr2.end(), a);
            
            if ((it == arr2.end() || *it - a > d) && 
                (it == arr2.begin() || a - *std::prev(it) > d)) {
                ++ans;
            }
        }
        return ans;
    }
};