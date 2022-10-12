class Solution:
    def longestPalindrome(self, s: str) -> str:
        s = list(s)
        mustr = s[0]
        for i in range(1,len(s)):
            s1 = s[:i]
            s2 = s[i:]
            s1.reverse()
            temp_str=''
            for j in range(min(len(s1),len(s2))):
                if s1[j] == s2[j]:
                    temp_str += s1[j]
                else:
                    break
            mustr = temp_str[::-1]+temp_str if len(mustr) < len(temp_str)*2 else mustr
            
        for i in range(1,len(s)-1):
            s1 = s[:i]
            s2 = s[i+1:]
            s1.reverse()
            temp_str=''
            for j in range(min(len(s1),len(s2))):
                if s1[j] == s2[j]:
                    temp_str += s1[j]
                else:
                    break
            mustr = temp_str[::-1] + s[i] + temp_str if len(mustr) < len(temp_str)*2+1 else mustr
            
        return mustr
