class Solution {
    public int firstUniqChar(String s) {
        for(int i=0; i< s.length(); i++){
            // If the character is found only once, then indexOf and lastIndexOf will point to same index position.
            if(s.indexOf(s.charAt(i)) == s.lastIndexOf(s.charAt(i))){
              return i;  
            } 
        }
        return -1;            
    }
}