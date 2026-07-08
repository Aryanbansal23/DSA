class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        for (int currSize = arr.size(); currSize > 1; currSize--) {
            int maxIndex = max_element(arr.begin(), arr.begin() + currSize) - arr.begin();
            if (maxIndex == currSize - 1)
                continue;
            if (maxIndex != 0) {
                reverse(arr.begin(), arr.begin() + maxIndex + 1);
                ans.push_back(maxIndex + 1);
            }
            reverse(arr.begin(), arr.begin() + currSize);
            ans.push_back(currSize);
        }
        return ans;
    }
};