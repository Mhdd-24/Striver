class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int temp;
        for(int i  = n;i>0;i--){
            if(nums[i]>nums[i-1]){
                temp = i;
                break;
            }
        }
        if(temp==0) sort(nums.begin(),nums.end());
        else{
            int min = INT_MAX;
            int swap = nums[temp-1];
            for(int j = temp;j<=n;j++){
                if(nums[j]-swap>0 and nums[j]-swap<min){
                    int m = nums[j];
                    nums[j]=nums[temp-1];
                    nums[temp-1] = m;
                }
            }
            sort(nums.begin()+temp,nums.end());
        }
        
    }
};