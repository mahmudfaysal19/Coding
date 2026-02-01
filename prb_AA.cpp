#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N, R;
    int num = 1;

    while (cin >> N >> R && (N != 0 || R != 0)) {
        vector<vector<int>> d(N + 1, vector<int>(N + 1, 0));

        for (int i = 0; i < R; ++i) {
            int u, v, p;
            cin >> u >> v >> p;
            d[u][v] = max(d[u][v], p);
            d[v][u] = max(d[v][u], p);
        }

        int S, D, T;
        cin >> S >> D >> T;

        for (int k = 1; k <= N; ++k) {
            for (int i = 1; i <= N; ++i) {
                for (int j = 1; j <= N; ++j) {
                    d[i][j] = max(d[i][j], min(d[i][k], d[k][j]));
                }
            }
        }

        int mn_trip = 0;
        if (S != D) {
            int mx_cap = d[S][D];
            int ef_cap = mx_cap - 1;
            
            if (ef_cap > 0) {
                mn_trip = (T + ef_cap - 1) / ef_cap;
            } else {
                mn_trip = 0; 
            }
        }

        cout << "num #" << num++ << endl;
        cout << "Minimum Number of Trips = " << mn_trip << endl;
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}