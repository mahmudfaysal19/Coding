#include<bits/stdc++.h>
#define ll long long
using namespace std;


    int loop(vector<int>& nums, int j){
        int val = nums[j], trgt = j+1;
        int mx = nums[j+1] + trgt;
        int n = nums.size();
        for(int i=j+2; i<= j+val; i++){
            if(i >= n-1)
                return n-1;
            if(i + nums[i] >= mx){
                mx = i + nums[i];
                trgt = i;
            }
        }
        return trgt;
    }

    int main(){
        int xx;
        vector<int>nums;
        for(int i=0; i<5; i++){
            cin>>xx;
            nums.push_back(xx);
        }
    
        
        int cnt = 0, n = nums.size();
        int cur_indx = 0;
        while(cur_indx != n-1){
            cur_indx = loop(nums, cur_indx);
            cnt++;
        }
        cout<<cnt<<endl;
    }
