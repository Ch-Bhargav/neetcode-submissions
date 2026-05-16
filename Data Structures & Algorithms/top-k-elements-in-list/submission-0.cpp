class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> lst;
        for(const auto& ele : nums){
            lst[ele]++;
        }
        vector<int> result;
        for(const auto& ele : lst){
            if(ele.second >= k) result.push_back(ele.first);
        }

        return result;
    }
};
