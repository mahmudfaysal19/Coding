#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, r;
    int num = 1;
    
    while(cin >> n >> r && (n != 0 || r != 0)) {
        vector<vector<pair<int, int>>> graph(n + 1);
        
        for(int i = 0; i < r; i++) {
            int c1, c2, p;
            cin >> c1 >> c2 >> p;
            graph[c1].push_back({c2, p});
            graph[c2].push_back({c1, p});
        }
        
        int s, d, t;
        cin >> s >> d >> t;

        vector<int> mx(n + 2, 0);
        priority_queue<pair<int, int>> pq;
        
        mx[s] = INT_MAX;
        pq.push({INT_MAX, s});
        
        while(!pq.empty()) {
            int cap = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            
            if(cap < mx[u]) continue;
            
            for(auto& edge : graph[u]) {
                int v = edge.first;
                int edge_cap = edge.second;
                int new_cap = min(cap, edge_cap);
                
                if(new_cap > mx[v]) {
                    mx[v] = new_cap;
                    pq.push({new_cap, v});
                }
            }
        }
        
        int mx_trip = mx[d];
        int mn_trip = (t + mx_trip - 1) / mx_trip;
        
        cout << "Scenario #" << num++ << endl;
        cout << "Minimum Number of Trips = " << mn_trip << endl;
        cout << endl;
    }
    
    return 0;
}