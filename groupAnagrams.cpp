class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        if (strs.size() == 0) {
            return ans;
        }

        unordered_map<string, vector<string>>mp;
        for (auto it : strs) {
            string word = "";
            word = it;
            sort(word.begin(), word.end());
            mp[word].push_back(it);
        }

        for (auto it:mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
