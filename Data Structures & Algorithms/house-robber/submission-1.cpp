class Solution {
public:
    int rob(vector<int>& nums) {
        return dfs(nums,0);
    }
    int dfs(vector<int>& nums, int n){
        if(n>=nums.size()) return 0;
        return max(dfs(nums,n+1),(nums[n]+dfs(nums,n+2)));
    }
};
