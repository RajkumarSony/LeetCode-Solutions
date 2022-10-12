/*

 You are given two string secret and string guess, you have to print "xAyB"
 Where x is the number of digits in the guess that are in the correct position
 Where y is the number of digits in the guess that are in your secret number but are located in the wrong position

 Ex:
 Input:-
     secret - 1807 
     guess  - 7810
 Output:-
    1A3B

 Explanation:-
    1. Calculate the number of x by iterating over the two string 
    2. Hash all the secret char in unordred_map
    3. Then iterate over the guess string and check if the char exists in the hash or not if yes remove it from the map and increase the count of y
    4. Finally u have x as x and y as y - x you can return "xAyB"
 
 Time: O(n)
 Space: O(n)

*/

class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int bull = 0, cows = 0;
        for (int i = 0; i < secret.size(); i++)
        {
            if (guess[i] == secret[i])
            {
                bull++;
            }
        }
        unordered_map<char, int> m;
        for (auto i : secret)
        {
            m[i]++;
        }
        for (auto i : guess)
        {
            if (m.find(i) != m.end())
            {
                m[i]--;
                if (m[i] == 0)
                    m.erase(i);
                cows++;
            }
        }
        string s = "";
        s += to_string(bull);
        s += "A";
        s += to_string(cows - bull);
        s += "B";
        return s;
    }
};