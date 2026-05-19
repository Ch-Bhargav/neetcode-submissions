class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> lst;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0) lst.insert({nums[i],nums[j],nums[k]});
                }
            }
        }

        vector<vector<int>> result;
        for(const auto& ele:lst) result.push_back(ele);
         return result;
    }
};
