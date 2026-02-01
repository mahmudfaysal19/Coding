#include<bits/stdc++.h>
// #include"bits/stdc++.h"
#define ll long long

using namespace std;



int main()
{
    ll n, i, t, xx , max;
    vector<ll>v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            v.push_back(xx);
            
        }

        max = *max_element(v.begin(), v.end());
        cout << max*n << endl;
        v.clear();

        // cout <<i<< endl;
    }

    return 0;
}