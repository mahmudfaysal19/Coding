#include"bits/stdc++.h"
// #include<iostream>
using namespace std;

int main()
{
    int i, n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n==2)
        cout<<"1"<<endl;
        else if(n%4==0){
            cout<<n/4<<endl;
        }
        else{
            cout<<(n/4)+1<<endl;
        }
    }

    return 0;
}