class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> temp;
        for(const auto& s : strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            temp[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pairs : temp){
            result.push_back(pairs.second);
        }
        return result;
    }
};
