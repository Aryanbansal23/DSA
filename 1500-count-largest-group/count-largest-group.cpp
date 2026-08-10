class Solution {
public:
    int countLargestGroup(int n) {
        int count[40] = {0};
        for (int i = 1; i <= n; i++) {
            int x = i;
            int sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            count[sum]++;
        }
        int maxi = 0;
        for (int i = 1; i < 40; i++) {
            maxi = max(maxi, count[i]);
        }
        int ans = 0;
        for (int i = 1; i < 40; i++) {
            if (count[i] == maxi) {
                ans++;
            }
        }
        return ans;
    }
};