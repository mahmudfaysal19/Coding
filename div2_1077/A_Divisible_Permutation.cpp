#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, t, xx,  cnt = 1;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        cin >> n;
        v.assign(n, 0);
        // cout<<1<<" ";
        v[n-1] = 1;
        for (i = n-2; i >= 0; i--)
        {
            
            if(cnt %2 != 0)
            v[i] = v[i+1] + (i + 1);
            else
            v[i] = v[i+1] - (i + 1);
            cnt++;
        }

        for (i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cnt = 1;
        v.clear();

    }

    return 0;
}








