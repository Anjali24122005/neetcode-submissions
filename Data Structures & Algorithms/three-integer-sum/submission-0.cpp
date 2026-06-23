class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
            int first=nums[i];
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1, r=n-1;
            while(l<r){
                if(nums[l]+nums[r]==-first){
                    ans.push_back({first, nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(l<r && nums[r]==nums[r+1]) r--;
                }else if(nums[l]+nums[r]<-first){
                    l++;
                }else if(nums[l]+nums[r]>-first){
                    r--;
                }
            }
        }
        return ans;
    }
};
