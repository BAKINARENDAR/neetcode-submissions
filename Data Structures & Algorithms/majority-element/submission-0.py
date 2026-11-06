class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans=0
        freq=0
        for i in range(len(nums)):
            if freq==0:
                ans=nums[i]
            if ans==nums[i]:
                freq+=1
            else:
                freq-=1
        return ans
        
        