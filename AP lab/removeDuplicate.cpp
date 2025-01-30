class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[k]==nums[i])
            {
                continue;
            }
            k++;
            swap(nums[i],nums[k]);

        }
        return k+1;
    }
    
};