class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // right[i] = minimum element from i to n-1
        vector<int> right(n);

        right[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            right[i] = min(right[i + 1], nums[i]);
        }

        // maxi = maximum element from 0 to i
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);

            if (maxi - right[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};