class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(),nums.end());
        int res =0;
        for(auto  num:nums){
            int curr=num, streak=0;
            while(store.find(curr) != store.end()){
                streak++;
                curr++;
            }
            res = max(res,streak);
        }
        return res;
    }
};
