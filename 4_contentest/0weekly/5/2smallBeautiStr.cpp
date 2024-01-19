class Solution {
    public String shortestBeautifulSubstring(String s, int k) 
    {
        String ans = "";
        ArrayList<String> aList = new ArrayList<>();
        for(int i=0;i<s.length();i++){
            int count = 0;
            for(int j=i;j<s.length();j++){
                if(s.charAt(j)=='1'){
                    count++;
                }
                if(count==k){
                    String str = s.substring(i, j+1);
                    aList.add(str);
                }
            }
        }
        if(aList.isEmpty()){
            return "";
        }
        String smallest = Collections.min(aList, Comparator.comparing(String::length).thenComparing(Comparator.naturalOrder()));
        System.out.println(smallest);
        return smallest;
    }
}