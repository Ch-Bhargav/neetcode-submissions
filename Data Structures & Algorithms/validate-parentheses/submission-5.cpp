class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch : s){
            if(isOpen(ch)) st.push(ch);
            else{
                if(st.empty()) return false;
                else st.pop();
            }
        }
        return st.empty();
    }
    bool isOpen(char ch){
        return ch == '[' || ch == '{' || ch == '(';
    }
    bool isClosed(char ch){
        return ch == ']' || ch == '}' || ch == ')';
    }
};
