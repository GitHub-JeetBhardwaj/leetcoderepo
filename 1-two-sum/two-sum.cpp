class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        int test=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if (nums[i]+nums[j]==target && i!=j){
                    result.push_back(i);
                    result.push_back(j);
                    test=1;
                }
                if(test==1){
                    break;
                }
            }
            if(test==1){
                break;
            }
        }
        return result;
    }
};