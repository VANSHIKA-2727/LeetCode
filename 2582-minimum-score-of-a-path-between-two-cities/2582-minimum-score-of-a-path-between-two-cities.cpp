#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


    int minScore(int n, vector<vector<int>>& roads) {
      
    vector<int> adj[n+1];
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        vector<bool> vis(n+1,false);
        vis[1] = true;                  
      
        queue<int> q;
        q.push(1);

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(auto &it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }


        int ans = INT_MAX;
        for(int i=0;i<roads.size();i++)
        {
          
            if(vis[roads[i][0]] && vis[roads[i][1]])
            {
                ans = min(ans,roads[i][2]);
            }
        }

        return ans;
    }
};
