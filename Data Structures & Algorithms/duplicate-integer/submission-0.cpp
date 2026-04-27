class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> num;
        for(auto ele : nums){
            num[ele]++;
        }
        for(auto ele : num){
            if(ele.second > 1) return true;
        }
        return false;
    }
};