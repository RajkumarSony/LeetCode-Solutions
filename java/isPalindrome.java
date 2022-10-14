class Solution {
    public boolean isPalindrome(int x) {
        char[] tmp = Integer.toString(x).toCharArray();
        for(int i=0;i<tmp.length/2+1;i++){
            if(tmp[i]!=tmp[tmp.length-i-1]){
                return false;
            }
        }
        return true;
    }
}
