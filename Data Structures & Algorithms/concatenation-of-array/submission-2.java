class Solution {
    public int[] getConcatenation(int[] nums) {
        int n=nums.length;
        ArrayList<Integer>ans=new ArrayList<>(2*n);
        for(int i=0;i<n;i++)
        {
            ans.add(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            ans.add(nums[i]);
        }
        int res[]=new int[ans.size()];
        for(int i=0;i<ans.size();i++)
        {
            res[i]=ans.get(i);
        }
        return res;
    }
}