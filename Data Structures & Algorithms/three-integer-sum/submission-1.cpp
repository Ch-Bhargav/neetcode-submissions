class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        set<vector<int>> st;
        int n = num.size();
        for(int i=0;i<n;i++){
            set<int> hashset;
            for(int j=i+1;j<n;j++){
                int third = (num[i]+num[j])*-1;
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp = {num[i],num[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(num[j]);
            }
        }

        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
