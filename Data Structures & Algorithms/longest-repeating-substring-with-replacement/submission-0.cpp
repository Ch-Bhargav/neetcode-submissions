class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int> hash;
            int maxf = 0;
            for(int j=i;j<n;j++){
                hash[s[j]]++;
                maxf = max(maxf,hash[s[j]]);
                if((j-i+1) - maxf <= k) maxLen = max(maxLen,j-i+1);
            }
        }
        return maxLen;

    }
};
