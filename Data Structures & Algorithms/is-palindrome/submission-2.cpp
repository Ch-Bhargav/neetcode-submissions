class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(auto ch : s){
            if(isalpha(ch)||isdigit(ch)) temp.push_back(tolower(ch));
        }
        int l=0,r=temp.size()-1;
        while(l<=r){
            if(temp[l]==temp[r]){
            l++;r--;}
            else return false;
        }
        return true;
    }
};
