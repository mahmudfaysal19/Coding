#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, j, t, xx, flag = 0, val, k, temp;
    cin >> t;
    vector<ll> v;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            v.push_back(xx);
        }

        for (i = 0; i < n; i++)
        {
            if (v[i] != n - i)
            {
                flag = 1;
                val = n - i;
                break;
            }
        }

        if (flag == 1)
        {
            for (j = i+1; j < n; j++)
            {
                if (v[j] == val)
                {
                    break;
                }
            }

            for(k = i; k<j; k++){
                temp = v[k];
                v[k] = v[j];
                v[j] = temp;
                j--;
            }
        }
        flag = 0;

        for (i = 1; i <= n; i++)
        {
            cout<<v[i-1]<<" ";
        }
        cout<<endl;
        v.clear();
    }

    return 0;
}








