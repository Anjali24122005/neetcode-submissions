class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;

        unordered_set<int>st;

        for(int num:nums){
            if(st.find(num)!=st.end()){
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};