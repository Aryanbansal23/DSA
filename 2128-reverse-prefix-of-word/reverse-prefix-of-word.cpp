class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        for (int i=0;i<n;i++){
            char t=word[i];
            if(t==ch){
                reverse(word.begin(),word.begin()+i+1);
                break;
            }
        }
        return word;
        
    }
};