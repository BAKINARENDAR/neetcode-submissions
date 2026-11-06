class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramG;
        for(string str:strs)
        {
            string sortedone=str;
            sort(sortedone.begin(),sortedone.end());
            anagramG[sortedone].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto & it:anagramG)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
