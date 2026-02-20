class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> subs;
        stack<char> st;
        int start = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '1') st.push('1');
            else st.pop();

            if(st.empty()){
                string middle = makeLargestSpecial(s.substr(start + 1, i - start -1));
                subs.push_back("1" + middle + "0");
                start = i + 1;
            }
        }
        sort(subs.begin(), subs.end(), greater<string>());
        string result;
        for(auto &sub: subs) result += sub;
        return result;

    }
};

