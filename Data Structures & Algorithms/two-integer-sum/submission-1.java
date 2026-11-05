class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>m=new HashMap<>();
        int ans[]=new int[2];
        for(int i=0;i<nums.length;i++)
        {
            int first=nums[i];
            int second=target-first;
            if(m.containsKey(second))
            {
                ans[0]=m.get(second);
                ans[1]=i;
            }
            m.put(first,i);
        }
        return ans;
    }
}
