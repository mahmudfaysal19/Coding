#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int endA = 0;
    int endB = 0;

    for (char c : s) {
        if (c == 'A') {
            if (endB > 0) {
                endB--;
                endA++;
            } 
            else {
                endA++;
            }
            
        } 
        else { 
            if (endA > 0) {
                endA--;
                endB++;
            } else {
                endB++;
            }
        }
    }
    cout << endA + endB << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}