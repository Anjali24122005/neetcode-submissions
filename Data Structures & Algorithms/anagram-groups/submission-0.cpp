class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramgroup;
        for(int i=0;i<strs.size();i++){
            string sortedstr=strs[i];
            sort(sortedstr.begin(), sortedstr.end());
            anagramgroup[sortedstr].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto& group : anagramgroup){
            result.push_back(group.second);
        }
        return result;
    }
};
