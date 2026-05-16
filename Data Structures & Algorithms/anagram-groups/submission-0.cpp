class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto& ele : strs){
            string sorted = ele;
            sort(sorted.begin(),sorted.end());
            res[sorted].push_back(ele);

        }
        vector<vector<string>> result;
        for(auto& pair : res){
            result.push_back(pair.second);
        }

        return result;
    }
};
