class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch : s){
            if(isOpen(ch)) st.push(ch);
            else{
                if(st.empty()) return false;
                else{
                    char top = st.top();
                    st.pop();
                    if (ch == ')' && top != '(') return false;
                    if (ch == '}' && top != '{') return false;
                    if (ch == ']' && top != '[') return false;
                }
            }
        }
        return st.empty();
    }
    bool isOpen(char ch){
        return ch == '[' || ch == '{' || ch == '(';
    }
};
