class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagramG={}
        for str in strs:
            sortedone=''.join(sorted(str))
            if sortedone not in anagramG:
                anagramG[sortedone]=[]
        
            anagramG[sortedone].append(str)
        ans=[]
        for group in anagramG.values():
            ans.append(group)
        return ans

        