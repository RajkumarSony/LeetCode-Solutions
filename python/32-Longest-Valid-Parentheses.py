class Solution:
    def longestValidParentheses(self, A: str) -> int:
        s=[-1]
        m=0
        for i in range(len(A)):
            if A[i]=='(':
                s.append(i)

            else:
                s.pop()
                if not s:
                    s.append(i)
                else:
                    m=max(m,i-s[-1])
        return m