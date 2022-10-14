class Solution {
public:
    string simplifyPath(string path) {
        
        vector<string> can_path;
        
        int n = path.size(), i = 0;
        while(i < n) {
            
            while(i < n and path[i] == '/') ++i;
            string str = "";
            while(i < n and path[i] != '/') {
                str += path[i];
                ++i;
            }
            if (str == "..") { 
                if(can_path.size() != 0)
                    can_path.pop_back();
            }
            else if (str != "." and str != "") 
                can_path.push_back(str);
        }
        string result = "";
        for(auto x: can_path)
            result += "/" + x;
        
        return result.size() ? result : "/";
    }
};
