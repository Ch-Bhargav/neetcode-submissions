class Solution {
public:

    bool isOpen(char ch){
        return (ch == '(' || ch == '{' || ch == '[');
    }
    bool isClose(char ch){
        return (ch == ')' || ch == '}' || ch == ']');
    }

    bool isValid(string s) {
        stack<char> st;
        
        for(const auto& ch : s){
            if(isOpen(ch)) st.push(ch);

            else if(isClose(ch)){
                if(st.empty()) return false;
                else{
                    char tp = st.top();

                    if((ch == ')' && tp == '(')||
                    (ch == '}' && tp == '{')||
                    (ch == ']' && tp == '[')) st.pop();

                    else return false;
                }
            }

        }

        return st.empty();
    }
};
