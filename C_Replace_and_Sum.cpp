#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, t, xx, q, l, r, sum = 0, mx ;
    cin >> t;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;
    while (t--)
    {
        cin >> n >> q;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            a.push_back(xx);
            c.push_back(xx);
        }
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            b.push_back(xx);
            
            if(b[i] > a[i])
                c[i] = b[i];
        }


        mx = c[n-1];
        for (i = n-2; i >= 0; i--)
        {
            mx = max(c[i], c[i+1]);
            c[i] = mx;
        }

        sum = c[0];
        for (i = 1; i < n; i++)
        {
            sum += c[i];
            c[i] = sum;
        }
 ;
        for(i=0; i<q; i++){
            cin>> l >>r;
            if(l != 1)
            cout<< c[r-1] - c[l-2] <<" ";
            else
            cout<< c[r-1]  <<" ";
        }
        cout<<endl;

        sum = 0;
        a.clear();
        b.clear();
        c.clear();
        
    }

    return 0;
}