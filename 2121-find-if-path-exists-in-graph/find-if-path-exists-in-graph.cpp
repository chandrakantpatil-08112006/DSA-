class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination){
            return true;
        }
        vector<vector<int>> adj(n); 

        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        q.push(source);

        vector<bool> vis(n,false);
        vis[source]=true;
        

        while(q.size()>0){
            int u = q.front();
            q.pop();

            for(auto v:adj[u]){
                if(!vis[v]){
                    vis[v]=true;
                    if(v==destination){
                        return true;
                    }
                    q.push(v);
                }
            }   
        }

        return false;
    }
};