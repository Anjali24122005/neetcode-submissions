class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> anagramgroup;
        // for(int i=0;i<strs.size();i++){
        //     string sortedstr=strs[i];
        //     sort(sortedstr.begin(), sortedstr.end());
        //     anagramgroup[sortedstr].push_back(strs[i]);
        // }
        // vector<vector<string>> result;
        // for(auto& group : anagramgroup){
        //     result.push_back(group.second);
        // }
        // return result;
      
        vector<vector<string>> result;
        
        for(int i = 0; i < strs.size(); i++) {
            bool found = false;
            for(int j = 0; j < result.size(); j++) {
                string sorted_i = strs[i];
                string sorted_j = result[j][0]; // Compare with first string in each group
                sort(sorted_i.begin(), sorted_i.end());
                sort(sorted_j.begin(), sorted_j.end());
                
                if(sorted_i == sorted_j) {
                    result[j].push_back(strs[i]);
                    found = true;
                    break;
                }
            }
            if(!found) {
                result.push_back({strs[i]});
            }
        }
        return result;
    }
};
