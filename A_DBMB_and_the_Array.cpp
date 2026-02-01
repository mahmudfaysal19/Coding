#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, t, s, x, xx, sum = 0;
    cin >> t;
    vector<ll> v;
    while (t--)
    {
        cin >> n >> s >> x;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            v.push_back(xx);
            sum += xx;
        }
        // sort(v.begin(), v.end());

        if(s < sum )
        {
            cout<< "NO" << endl;
        }   

        else if((s - sum) % x == 0)
        {
            cout<< "YES" << endl;
        }
        else
        {
            cout<< "NO" << endl;
        }


        sum = 0;
        v.clear();
    }

    return 0;
}