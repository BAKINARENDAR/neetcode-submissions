class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer>s=new HashSet<>();
        for(int val:nums)
        {
            if(s.contains(val))
            {
                return true;
            }
            s.add(val);
        }
        return false;
    }
}