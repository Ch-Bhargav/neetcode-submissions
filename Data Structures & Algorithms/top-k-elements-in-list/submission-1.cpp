class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> lst;
        for(const auto& ele : nums){
            lst[ele]++;
        }

        vector<pair<int,int>> arr;
        for(const auto& ele : lst){
            arr.push_back({ele.second,ele.first});
        }

        sort(arr.rbegin(),arr.rend());

        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(arr[i].second);
        }
        
        return result;
    }
};
