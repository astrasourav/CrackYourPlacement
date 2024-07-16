class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 0) {
            return false;
        }

        stack<char> st;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    char tmp = st.top();
                    st.pop();
                    if ( (tmp == '(' && s[i] == ')') || (tmp == '{' && s[i] == '}') || (tmp == '[' && s[i] == ']') ) {
                        continue;
                    } else {
                        return false;
                    }
                }
            }
        }

        if (st.empty()) {
            return true;
        }

        return false;
    }
};
