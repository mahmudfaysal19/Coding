// #include<bits/stdc++.h>
// // #include "bits/stdc++.h"
// #define ll long long

// using namespace std;

// int main()
// {
//     ll n, i, j, t, xx, max, min, val, max_sequence = 0, current_sequence = 0;
//     cin >> t;
//     vector<ll> v;
//     while (t--)
//     {
//         cin >> n;
//         for (i = 0; i < n; i++)
//         {
//             cin >> xx;
//             v.push_back(xx);
//         }
//         max = *max_element(v.begin(), v.end());
//         min = *min_element(v.begin(), v.end());
//         {
//             vector<ll> m(max - min + 1, 0);

//             for (i = 0; i < n; i++)
//             {
//                 if (min < 0 && v[i] > -1)
//                 {
//                     val = -min + v[i];
//                 }
//                 else
//                 {
//                     val = abs(min - v[i]);
//                 }
//                 m[val]++;
//             }

//             for (auto i : v)
//             {
//                 val = (min < 0 && i > -1) ? -min + i : abs(min - i);
//                 m[val]++;
//             }

//             int max_sequence = 0;
//             int current_sequence = 0;

//             for (int va : m)
//             {
//                 if (va != 0)
//                 {
//                     current_sequence++;
//                 }
//                 else
//                 {
//                     if (current_sequence > max_sequence)
//                     {
//                         max_sequence = current_sequence;
//                     }
//                     current_sequence = 0;
//                 }
//             }

//             if (current_sequence > max_sequence)
//             {
//                 max_sequence = current_sequence;
//             }

//             cout << max_sequence << endl;

//             v.clear();
//         }
//         max_sequence = 0;
//         current_sequence = 0;
//     }

//     return 0;
// }

// // if (min < 0 && i > -1)
// //                 {
// //                     val = -min + i;
// //                 }
// //                 else
// //                 {
// //                     val = abs(min - i);
// //                 }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, i, t, max = 1, xx, cnt = 1;
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
        sort(v.begin(), v.end());

        for (i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                continue;
            }
            else if (v[i] == v[i - 1] + 1)
            {
                cnt++;
            }
            else
            {
                if (cnt > max)
                {
                    max = cnt;
                }
                cnt = 1;
            }
        }

        if (cnt > max)
        {
            max = cnt;
        }
        
        cout << max << endl;
        max = 1;
        cnt = 1;
        v.clear();
    }

    return 0;
}

