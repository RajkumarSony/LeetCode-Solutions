class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_dic = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
            }

  
        skip_next_n = False
        int_sum = 0
        for idx, n in enumerate(s):
            if skip_next_n == True:
                skip_next_n = False
                continue
            try:
                if roman_dic[n] < roman_dic[s[idx + 1]]:
                    int_sum +=  roman_dic[s[idx + 1]] - roman_dic[n]
                    skip_next_n = True
                    continue
                else:
                    int_sum += roman_dic[n]
            except:
                int_sum += roman_dic[n]
                
        return int_sum