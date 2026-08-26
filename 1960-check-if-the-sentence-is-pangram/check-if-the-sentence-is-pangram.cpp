class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool freq[26] = {false};

        for (char c : sentence) {
            freq[c - 'a'] = true;
        }

        for (int i = 0; i < 26; i++) {
            if (!freq[i])
                return false;
        }

        return true;
    }
};