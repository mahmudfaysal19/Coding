#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++) {
        int n, q;
        cin >> n >> q;
        
        deque<int> line;
        
        for(int i = 0; i < n; i++) {
            int person_numx;
            cin >> person_numx;
            line.push_back(person_numx);
        }
        
        cout << "Case " << tc << ":" << endl;
        
        for(int i = 0; i < q; i++) {
            char op;
            cin >> op;
            
            if(op == 'a') {
                int person_numx;
                cin >> person_numx;
                line.push_back(person_numx);
            } else {
                int k;
                cin >> k;
                
                if(k > line.size() || k < 1) {
                    cout << "none" << endl;
                } else {
                    int person_numx = line[k - 1];
                    line.erase(line.begin() + k - 1);
                    cout << person_numx << endl;
                }
            }
        }
    }
    
    return 0;
}