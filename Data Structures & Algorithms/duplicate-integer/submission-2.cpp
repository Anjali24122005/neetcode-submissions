class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     unordered_map<int,int> freq;
    //     for(int num:nums){
    //     freq[num]++;
    //     if(freq[num]>1){
    //         return true;
    //      }
    //  }
    //  return false;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]) return true;
        }
    }
     return false;
  }

};
