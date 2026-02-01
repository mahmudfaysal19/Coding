#include <bits/stdc++.h>
using namespace std;

int calculate_d(long long n) {
    int ld_sums = 0;
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 1) {
            ld_sums += digit;
        } else {
            ld_sums += 2 * digit;
        }
        n /= 10;
    }
    return ld_sums % 10;
}

long long solve(long long b) {
    if(b < 0) return 0;
    
    long long complete_cycles = (b + 1) / 10;
    long long remaining = (b + 1) % 10;
    
    long long total = complete_cycles * 45;
    
    for(long long i = 0; i < remaining; i++) {
        total += calculate_d(b - remaining + 1 + i);
    }
    
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b;
        cin >> a >> b;
        
        long long result = solve(b) - solve(a - 1);
        cout << result << endl;
    }
    
    return 0;
}