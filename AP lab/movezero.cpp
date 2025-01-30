class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0){
                ans.push_back(arr[i]);
            }
        }
        int nz = ans.size();
        for(int i = 0 ; i < nz ; i++){
            arr[i]=ans[i];
        }
        for(int i =nz  ; i < n ; i++){
            arr[i]=0;

        }
        
    }
};