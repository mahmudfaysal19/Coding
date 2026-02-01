

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mid(string &v, int first, int sec)
{
    int cnt = 0;
    int trgt = 0;

    if (first == sec)
        return 0;

    for (int i = first; i < sec - 1; i++)
    {
        if (v[i + 1] == '0')
        {
            cnt++;
        }
        else
        {
            trgt += cnt / 3;
            cnt = 0;
        }
    }
    return trgt;
}

int main()
{
    int n, i, t, cnt = 0, ans;
    char xx;
    cin >> t;
    string v;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            v.push_back(xx);
            if (v[i] == '1')
                cnt++;
        }

        if (cnt >= 1)
        {
            int first;
            int sec;

            for (i = 0; i < n; i++)
            {
                if (v[i] == '1')
                {
                    first = i;
                    break;
                }
            }

            for (i = n - 1; i >= 0; i--)
            {
                if (v[i] == '1')
                {
                    sec = i;
                    break;
                }
            }
            cout<<first<<sec<<endl;
            ans = mid(v, first, sec) ;
            // + (first + 1) / 3 + (n - sec) / 3
        }
        else
            ans = (n + 2) / 3;
        cout << ans  << endl;
        cnt = 0;
        v.clear();
    }

    return 0;
}
