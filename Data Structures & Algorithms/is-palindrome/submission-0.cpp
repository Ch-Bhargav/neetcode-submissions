
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char ch : s) if(isalnum(ch)) str+=tolower(ch);
        cout << str << " " << str.size() << " " << str.size()/2 << endl;

        for(int i=0;i<(str.size()/2);i++){
            cout << str[i] << " " << str[str.size()-i-1] << endl;
            if(str[i] != str[str.size()-i-1]) return false;
        }
        return true;
    }
};
