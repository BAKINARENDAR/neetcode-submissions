class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>>anag=new HashMap<>();
        for(String str:strs)
        {
            char arr[]=str.toCharArray();
            Arrays.sort(arr);
            String sorted=new String(arr);
            anag.putIfAbsent(sorted,new ArrayList<>());
            anag.get(sorted).add(str);
        }
        List<List<String>>ans=new ArrayList<>();
        for(List<String>group:anag.values())
        {
            ans.add(group);
        }
        return ans;
    }

}
