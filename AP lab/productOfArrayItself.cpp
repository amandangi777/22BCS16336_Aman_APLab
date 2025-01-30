class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n+1,1);
        vector<int> suf(n+1,1);
        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]*nums[i];
        }
         for(int i=n;i>0;i--)
         {
            suf[i-1]=suf[i]*nums[i-1];
         }
         vector<int> num(n,1);
         for(int i=0;i<n;i++)
         {
            num[i]=pre[i]*suf[i+1];
         }
       
         return num;


    }
};