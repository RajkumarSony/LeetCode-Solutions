class Solution {
public:
    string greatestLetter(string s) {
        string str = "";
        unordered_map<char,int> map;
        for(char c : s){
            map[c]++;
        }
        
        sort(s.begin(), s.end());
        
        for(int i=s.size()-1 ; i>=0 ; i--){
            char a = tolower(s[i]);
            char b = toupper(s[i]);
            
            if(map.find(a) != map.end() and map.find(b) != map.end()){
                str = b;
                break;
            }
        }
        return str;
    }
};
