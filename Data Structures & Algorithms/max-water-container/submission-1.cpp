class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int area = INT_MIN;
        int l=0,r=n-1;
        while(l<r){
            area = max(area,(min(heights[l],heights[r])*(r-l)));
            if(heights[l] <= heights[r])l++;
            else r--;
        }
        return area;
    }
};
