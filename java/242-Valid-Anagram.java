class Solution {

    public boolean isAnagram(String s, String t) {
        char sarr[]=s.toCharArray();
        char tarr[]=t.toCharArray();
        
        Arrays.sort(sarr);
        Arrays.sort(tarr);
        
        if(Arrays.equals(sarr,tarr)){
            return true;
        }else{
            return false;
        }
    }
}
