class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pre(n,1),suf(n,1);
        /*
        find longest non-increasing subarray length ending at index=i
        and store it in pre[i]
        */
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1])pre[i]=pre[i-1]+1;
        }
        /*
        find longest non-decreasing subarray length starting at index=i
        and store it in suf[i]
        */
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1])suf[i]=suf[i+1]+1;
        }
        vector<int> ans;
        //return all those indices having pre[i-1]>=k as well suf[i+1]>=k
        for(int i=k;i<n-k;i++){
            if((pre[i-1]>=k)&&(suf[i+1]>=k))ans.push_back(i);
        }
        return ans;
        
    }
};