class Solution {
public:
    void dfs(vector<bool>&vis,vector<int>adj[],int i){
        vis[i]=true;
        for(auto x:adj[i]){
            if(vis[x])continue;
            dfs(vis,adj,x);
        }
        return;
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int>adj[n+1];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++){
            vector<bool>vis(n,false);
            dfs(vis,adj,i);
            for(int j=0;j<n;j++){
             if(i==j)   continue;
                if(vis[j])ans[j].push_back(i);
            }
        }
        return ans;
        
        
    }
};
