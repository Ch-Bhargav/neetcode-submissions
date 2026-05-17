class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int> sizes;
        string res = "";
        for(const auto& ele : strs){
            sizes.push_back(ele.size());
        }
        for(const auto& sz : sizes){
            res += to_string(sz) + ',';
        }
        res += '#';
        for(const auto& s : strs){
            res+=s;
        }

        cout << res;
        return res;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<int> sizes;
        vector<string> result;

        int i=0;
        while(s[i]!='#'){
            string curr = "";
            while(s[i] != ','){
                curr += s[i];
                i++;
            }
            sizes.push_back(stoi(curr));
            i++;
        }
        i++;
        for(int sz : sizes){
            result.push_back(s.substr(i,sz));
            i+=sz;
        }
        return result;
    }
};
