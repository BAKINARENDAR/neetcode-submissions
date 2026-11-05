class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m={}
        ans=[]
        for i in range(len(nums)):
            first=nums[i]
            second=target-first
            if second in m:
                ans.append(m[second])
                ans.append(i)
            m[first]=i
        return ans
        