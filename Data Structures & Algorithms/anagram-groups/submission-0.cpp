
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string temper = strs[i];

            sort(temper.begin(), temper.end());

            // Store the original string in its group
            mp[temper].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        // Copy every group from the map into ans
        for (auto entry : mp) {
            ans.push_back(entry.second);
        }

        return ans;
    }
};
