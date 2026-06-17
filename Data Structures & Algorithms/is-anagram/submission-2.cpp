class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size()!=t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        //  return (s==t) ?true:false;
       vector<int> count(26,0);

       for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
       }

       for(int i=0;i<26;i++){
        if(count[i]!=0) return false;
       }
       return true;
    }
};
