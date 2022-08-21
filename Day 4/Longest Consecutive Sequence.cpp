class Solution {
public:
    int longestConsecutive(vector<int>& nums){
    if(!size(nums))
        return 0;
    sort(begin(nums),end(nums));
    int long_seq=0,cur_long_seq=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i-1]==nums[i]-1){
            cur_long_seq++;
        }
        else{
            long_seq=max(long_seq,cur_long_seq),cur_long_seq=1;
        }
    }
    return max(long_seq,cur_long_seq);
    }
};
