class Solution {
public:
   bool dfs(int node,int parent,vector<bool>&vis,vector<vector<int>>&adj)
   {
    vis[node]=true;
    for(auto & it:adj[node])
    {
        if(vis[it]==false)
        {
            if(dfs(it,node,vis,adj))
            {
                return true;
            }
        }else if(it!=parent)
        {
            return true;
        }
    }
    return false;
   }
    bool validTree(int n, vector<vector<int>>& edges) {
          vector<vector<int>>adj(n);
          for(auto & it:edges)
          {
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
          }
          vector<bool>vis(n,false);
          if(dfs(0,-1,vis,adj))
          {
              return false;
          }
          for(int i=0;i<n;i++)
          {
            if(vis[i]==false)
            {
                return false;
            }
          }
          return true;
    }
};
