// Problem link: https://leetcode.com/contest/weekly-contest-306/problems/count-special-integers/

#define each(a) for(auto& e: a)

class Solution {
public:
    int countSpecialNumbers(int n) {
        map<int, int> cnt {
            {9, 9},
            {99, 9*9},
            {999, 9*9*8},
            {9999, 9*9*8*7},
            {99999, 9*9*8*7*6},
            {999999, 9*9*8*7*6*5},
            {9999999, 9*9*8*7*6*5*4},
            {99999999, 9*9*8*7*6*5*4*3},
            {999999999, 9*9*8*7*6*5*4*3*2}
        };
        int ans = 0;
        n++;
        each(cnt) {
            if(e.first < n) ans += e.second;
        }
        auto get = [&](int x, int k) {
            int r = 1;
            for(int i = 1; i <= x; i++, k--) {
                r *= k;
            }
            return r;
        };
        set<int> vis;
        function<void(string, int)> recur = [&](string s, int i) {
            int x = s[i] - '0';
            for(int j = i ? 0 : 1; j < x; j++) {
                if(vis.find(j) == vis.end()) {
                    ans += get(s.size() - i - 1, 9 - i);
                }
            }
            vis.insert(x);
            if(i < s.size() - 1 && i + 1 == vis.size()) recur(s, i + 1);
        };
        recur(to_string(n), 0);
        return ans;
    }
};
