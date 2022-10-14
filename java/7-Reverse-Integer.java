class Solution {
    public int reverse(int x) {
        boolean negative = false;
        long revInt = 0;

        if(x < 0) {
            negative = true;
            x = -x;
        }

        while(x > 0){
            revInt = (10*revInt) + (x % 10);
            x /= 10;
        }
        if(revInt < Integer.MIN_VALUE || revInt > Integer.MAX_VALUE) return 0;
        if(negative) return (int) -revInt; else return (int) revInt;
    }
}