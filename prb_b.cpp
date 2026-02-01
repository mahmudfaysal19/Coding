#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    vector<int> desks;
    int ans = 0;

    for (int i = 0; i < m; i++) {
        bool already_seated = false;
        for (int x : desks) {
            if (x == a[i]) {
                already_seated = true;
                break;
            }
        }

        if (already_seated) continue;
        ans++;

        if (desks.size() < n) {
            desks.push_back(a[i]);
        } else {
            int remove_index = -1;
            int farthest_time = -1;

            for (int j = 0; j < desks.size(); j++) {
                int next_use = 10000;

                for (int k = i + 1; k < m; k++) {
                    if (a[k] == desks[j]) {
                        next_use = k;
                        break;
                    }
                }

                if (next_use > farthest_time) {
                    farthest_time = next_use;
                    remove_index = j;
                }
            }
            
            desks[remove_index] = a[i];
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}