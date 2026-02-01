#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main()
{
    int t, s = 0, f = 0;
    vector<ll> v;
    vector<ll> b;
    ll n, i, xx, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> xx;
            v.push_back(xx);
        }
        if (v[0] != -1 && v[n - 1] != -1)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (v[i + 1] == -1)
                    v[i + 1] = 0;
                s += v[i + 1] - v[i];
            }
            cout << abs(s) << endl;
            for (i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            s = 0;
            v.clear();
        }
        else if (v[0] == -1 && v[n - 1] != -1)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (v[i + 1] == -1 && f == 0)
                {
                    continue;
                }
                if (v[i + 1] == -1)
                    v[i + 1] = 0;
                if (f == 1)
                {

                    s += v[i + 1] - v[i];
                }
                if (f == 0)
                    k = v[i + 1];
                f = 1;
            }
            if (s >= 0)
            {
                i = 0;
                while (v[i] != k)
                {
                    v[i] = k + s;
                    i++;
                }
                for (i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                s = 0;
                v.clear();
                f = 0;
            }
            else
            {
                s = s - 1;
                if (k > (s))
                {
                    i = 0;
                    while (v[i] != k)
                    {
                        v[i] = k - s;
                        i++;
                    }
                    f = 0;
                }
                else
                {
                    i = 0;
                    while (v[i] != k)
                    {
                        v[i] = 0;
                        i++;
                    }
                    f = 1;
                }
                if (f == 0)
                    s = 0;
                else
                    s = s - k;
                for (i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                s = 0;
                v.clear();
                f = 0;
            }
        }

        else if (v[0] != -1 && v[n - 1] == -1)
        {
            for (i = n - 1; i > 0; i--)
            {
                if (v[i - 1] == -1 && f == 0)
                {
                    continue;
                }
                if (v[i - 1] == -1)
                    v[i - 1] = 0;
                if (f == 1)
                {

                    s += v[i] - v[i - 1];
                }
                if (f == 0)
                    k = v[i - 1];
                f = 1;
            }
            if (s <= 0)
            {

                i = n - 1;
                while (v[i] != k)
                {
                    v[i] = k + (s * (-1));
                    i--;
                }
                for (i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                s = 0;
                v.clear();
                f = 0;
            }
            else
            {
                // s = s * (-1);
                if (k > (s))
                {
                    i = 0;
                    while (v[i] != k)
                    {
                        v[i] = k - s;
                        i--;
                    }
                    f = 0;
                }
                else
                {
                    i = 0;
                    while (v[i] != k)
                    {
                        v[i] = 0;
                        i--;
                    }
                    f = 1;
                }
                if (f == 0)
                    s = 0;
                else
                    s = s - k;
                for (i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                s = 0;
                v.clear();
                f = 0;
            }
        }

        else if (v[0] == -1 && v[n - 1] == -1)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (v[i + 1] == -1)
                {
                    continue;
                }

                k1 = i + 1;
                break;
            }

            for (i = n - 1; i > 0; i--)
            {
                if (v[i - 1] == -1)
                {
                    continue;
                }

                k2 = v[i - 1];
            }

            for (i = k1; i < k2 ; i++)
            {
                if (v[i + 1] == -1)
                    v[i + 1] = 0;
                s += v[i + 1] - v[i];
            }

            if(s + v[k1] < v[k2] ){
                
                i = 0;
                while(i < k1){
                    v[i] = 0;
                i++;                
            }
                // f = 0;

                v[n-1] = v[k2] + (s + v[k1])*(-1);
                i = n - 2;
                while(i > k2){
                    v[i] = 0;
                    i--;   
                }     
            }
            else{
                v[0] = v[k1] + s - v[k2];
                i = 1;
                while(i < k1){
                    v[i] = 0;
                    i++;
                }

                i = k2 + 1;
                while(i < n){
                    v[i] = 0;
                    i++;
                }

            }
            s = 0;
            for(i = 0; i < n-1; i++)
            {
                s += v[i+1] - v[i];
            }
            cout<<abs(s)<<endl;
            for (i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }   
            cout << endl;
            s = 0;
            v.clear();
            f = 0;
        }
    }