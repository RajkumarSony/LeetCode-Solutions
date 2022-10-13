class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x= nums.size();
        vector<int> a(x);
        int i=0,j=1;
        for(int k=0;k<x;k++){
            if(nums[k]>0){
                a[i]=nums[k];
                i+=2;
            }
            else{
                a[j]=nums[k];
                j+=2;
            }
        }
        return a;
    }
};
