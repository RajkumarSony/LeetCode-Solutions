class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char a[s.size()+1];
        a[s.size()]='\0';
        for(int i=0;i<indices.size();i++){
            a[indices[i]]=s[i];
        }
        return a;
    }
};