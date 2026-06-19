class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans.push_back(matrix[i][j]);
            }
        }

        int i=0, j=ans.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(ans[mid]==target){
                return true;
            }else if(target<ans[mid]){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return false;
    }
};
