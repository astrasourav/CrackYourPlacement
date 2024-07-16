class Solution {
public:
    string reverseWords(string s) {
        if (s.length() == 0) {
            return "";
        }

        stack<string> st;
        string ans;
        int n = s.length();

        string tmp;
        for (int i=0; i<n; i++) {
            if (s[i] != ' ') {
                tmp += s[i];
            } else {
                if (!tmp.empty()) {
                    st.push(tmp);
                    tmp = "";
                }
            }
        }

        if (!tmp.empty()) {
            st.push(tmp);
        }

        while (!st.empty()) {
            ans += st.top() + ' ';
            st.pop();
        }

        if (!ans.empty()) {
            ans.pop_back();
        }

        return ans;
    }
};
