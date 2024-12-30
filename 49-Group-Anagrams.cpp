class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        for (string s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }
        for (auto &i : map) {
            ans.push_back(i.second);
        }
        return ans;
    }
};