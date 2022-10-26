/*
  Given a positive integer num, write a function which returns True if num is a perfect square else False.
  
  Follow up: Do not use any built-in library function such as sqrt.
  
  Constraints: 1 <= num <= 2^31 - 1
              
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 0, end = num;
        while (start <= end) {
            long long mid = (start + end) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid > num)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return false;
    }
};
