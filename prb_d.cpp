#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll dp[65][65];
string s;

ll solve(int i, int j) {
    if (i > j) return 0;
    if (i == j) return 1;
    if (dp[i][j] != -1) return dp[i][j];

    ll res;
    if (s[i] == s[j]) {
        res = solve(i + 1, j) + solve(i, j - 1) + 1;
    } else {
        res = solve(i + 1, j) + solve(i, j - 1) - solve(i + 1, j - 1);
    }
    
    return dp[i][j] = res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        cin >> s;
        memset(dp, -1, sizeof(dp));
        cout << "Case " << k << ": " << solve(0, s.size() - 1) << endl;
    }
    return 0;
}