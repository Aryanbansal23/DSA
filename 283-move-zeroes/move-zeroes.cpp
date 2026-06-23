class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>q;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                q.push_back(nums[i]);
            }
        }
        if(q.size()!=n){
            for(int i=q.size();i<n;i++){
                q.push_back(0);
            }
        }
        nums=q;
    }
};