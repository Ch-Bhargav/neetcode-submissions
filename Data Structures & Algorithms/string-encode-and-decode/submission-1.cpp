class Solution {
public:

    string encode(vector<string>& strs) {

        if(strs.empty()) return "";
        vector<int> sizes;
        string res = "";
        for(const auto& ele : strs){
            sizes.push_back(ele.size());
        }
        for(const auto& ele : sizes){
            res += to_string(ele)+',';
        }
        res+='#';
        for(const auto& ele : strs){
            res+=ele;
        }

        return res;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string> res;
        vector<int> sizes;
        int i=0;

        while(s[i]!='#'){
            string curr = "";

            while(s[i]!=','){
                curr+=s[i];
                i++;
            }
            sizes.push_back(stoi(curr));
            i++;
        }
        i++;
        for(auto sz : sizes){
            res.push_back(s.substr(i,sz));
            i+=sz;
        }
        return res;
    }
};
