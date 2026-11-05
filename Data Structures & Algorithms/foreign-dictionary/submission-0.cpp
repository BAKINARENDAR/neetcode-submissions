class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        vector<vector<int>>adj(26);
        for(int i=0;i<words.size()-1;i++)
        {
            string s1=words[i];
            string s2=words[i+1];
            int min_size=min(s1.size(),s2.size());
            if(s1.size()>s2.size() && s2==s1.substr(0,s2.size()))
            {
                return "";
            }
            for(int j=0;j<min_size;j++)
            {
                if(s1[j]!=s2[j])
                {
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        vector<int>indegree(26,0);
            for(int i=0;i<26;i++)
        {
            for(auto & it:adj[i])
            {
                indegree[it]++;
            }
        }
         queue<int>q;
        unordered_set<char>s;
        for(string str:words)
        {
            for(char ch:str)
            {
                s.insert(ch);
            }
        }
       for(char ch:s)
            {
                if(indegree[ch-'a']==0)
                {
                    q.push(ch-'a');
                }
            }
        
        vector<int>ans;
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            ans.push_back(t);
            for(auto & it:adj[t])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
        if(ans.size()<s.size()) return "";
        string res;
        for(int val:ans)
        {
            res+=(val+'a');
        }
        return res;
    }
};
