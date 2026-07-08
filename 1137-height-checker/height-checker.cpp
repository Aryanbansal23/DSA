class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>e;
        int count=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            e.push_back(heights[i]);
        }
        sort(e.begin(),e.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=e[i]){
                count++;
            }

        }
        return count;
    }
};