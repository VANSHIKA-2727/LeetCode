class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int kk) {
        const int INF = 1e9;
        vector<int> dist(n, INF);
        dist[src] = 0;

        for(int i = 0; i <= kk; i++) {
            vector<int> temp = dist; // copy to avoid overwriting in same iteration
            for(auto x : flights) {
                int u = x[0], v = x[1], w = x[2];
                if(dist[u] != INF && dist[u] + w < temp[v]) {
                    temp[v] = dist[u] + w;
                }
            }
            dist = temp;
        }

        return dist[dst] == INF ? -1 : dist[dst];
    }
};
