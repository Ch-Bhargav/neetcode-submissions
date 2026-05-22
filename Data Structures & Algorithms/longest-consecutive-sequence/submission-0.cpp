class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int longestCount = 0, count = 1;
        int lastSmallest = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == lastSmallest){
                count+=1;
                lastSmallest = nums[i];
            }else if(lastSmallest != nums[i]){
                count = 1;
                lastSmallest = nums[i];
            }
            longestCount = max(longestCount,count);
        }
        return longestCount;
    }
};
