/*
Given a roman numeral, convert it to an integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two ones added together.
12 is written as XII, which is simply X + II. 
The number 27 is written as XXVII, which is XX + V + II
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. 
Instead, the number four is written as IV. Because the one is before the five we subtract it making four. 
The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
->  I can be placed before V (5) and X (10) to make 4 and 9. 
->  X can be placed before L (50) and C (100) to make 40 and 90. 
->  C can be placed before D (500) and M (1000) to make 400 and 900.

Expected Time Complexity: O(|s|), |s| = length of string s.
Expected Auxiliary Space: O(1)
*/

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        int len=s.length(), num, sum=0;
        for(int i=0; i<len;)
        {
            if(i==(len-1) || (roman[s[i]] >= roman[s[i+1]]))
            {
                num=roman[s[i]];
                 i++;
            }
            else
            {
                num=roman[s[i+1]]-roman[s[i]];
                i=i+2;
            }
            sum =sum +num;
        }
        return sum;
    }
};
