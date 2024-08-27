class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                for(int k=j;k<arr.size();k++){
                    if(abs(arr[i]-arr[j])<=a&&abs(arr[j]-arr[k])<=b&&abs(arr[i]-arr[k])<=c&&i!=j&&j!=k&&k!=i){
                        count++;
                    }
                }
            }
        }
        
    return count;}
};