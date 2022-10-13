// You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

// pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
// Note that ^ denotes the bitwise-xor operation.

// It can be proven that the answer is unique.

// Input: pref = [5,2,0,3,1]
// Output: [5,7,2,3,2]



class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans(n, 0);
        ans[0] = pref[0];
        for(int i = 1; i < pref.size(); i++){
            ans[i] = pref[i]^pref[i-1];
        }
        return ans;
    }
    
};

// logic is if a^b = c
// then a^b^b = c^b
// then a^0 = c^b since xor of 2 same numbers = 0
// then a = c^b since xor of any number with 0 results in the number itselfs