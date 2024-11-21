class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=1;
        int result;
        for(i;i<nums.size()-1;i++){
            if(nums[i-1]<nums[i]&&nums[i+1]<nums[i]){
                result=i;
                break;
            }
        }
        if(i==nums.size()-1){
            result=max_element(nums.begin(),nums.end())-nums.begin();
        }
        if(nums.size()==1){
            result=0;
        }
        else if(nums.size()==2){
            if(nums[i-1]<nums[i]){
                result=1;
            }
            else{result=0;}
                
        }
    return result;
    }
};