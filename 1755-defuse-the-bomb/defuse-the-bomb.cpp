class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>v;
        int j=0;
        for(int i=0;i<code.size();i++){
            int sum=0;
            if(k>0){
                int x=0;
            for(int j=(i+1)%code.size();x<k;){
                sum+=code[j];
                if(j==code.size()-1){
                    j=0;
                }
                else{
                    j++;
                }
                x++;
            }
            }
            else if(k<0){
                int x=0;
                int j;
                if((i-1)==-1){
                    j=code.size()-1;
                }
                else{
                    j=i-1;
                }
            for(j;x>k;){
                sum+=code[j];
                if(j==0){
                    j=code.size()-1;
                }
                else{
                    j--;
                }
                x--;

            }
            }
            else{
                sum=0;
            }

            v.push_back(sum);
        }
    return v;}
};