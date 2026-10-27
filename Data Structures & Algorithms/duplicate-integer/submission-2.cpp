#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> list;
        for(auto x : nums){
            list[x]++;
            if(list[x]>1) return true;
        }
        return false;
    }
};