class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int count = 1, t = 1;

        for(int i = 1; i < temp.size(); i++) {
            if(temp[i] == temp[i-1]) continue;

            if(temp[i] == temp[i-1] + 1) {
                t++;
            }
            else {
                count = max(t, count);
                t = 1;
            }
        }

        return max(count, t);
    }
};