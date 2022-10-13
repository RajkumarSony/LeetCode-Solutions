class MapSum {
    Map<String,Integer> map=new TreeMap();
    public MapSum() {
        
    }
    
    public void insert(String key, int val) {
        map.put(key,val);
    }
    
    public int sum(String prefix) {
        int s=0;
        for(Map.Entry m:map.entrySet()){
            if((""+m.getKey()).length()>=prefix.length()){
                if((""+m.getKey()).substring(0,prefix.length()).equals(prefix))
                    s+=(int)m.getValue();
            }
        }
        return s;
    }
}

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
