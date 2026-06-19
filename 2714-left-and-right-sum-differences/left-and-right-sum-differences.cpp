class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>q;
        int right=0;
        int left=0;
        int diff=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                right+=nums[j];
            }
            if(i>0){
                for(int k=0;k<i;k++){
                left+=nums[k];}
            }
            if(i==n){
                right=0;
            }
            diff=abs(left-right);
            q.push_back(diff);
            left=0;
            right=0;

        }
        return q;

    }
};