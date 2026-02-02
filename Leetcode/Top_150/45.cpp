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
        int jumps = 0;
        int currEnd = 0;
        int farthest = 0;

        int nums[]={3,0,5,1,2,3,3,1,0,12};
        for (int i = 0; i < 10 - 1; i++) {
            farthest = max(farthest, i + nums[i]);

            // when we reach the end of current jump range
            if (i == currEnd) {
                jumps++;
                currEnd = farthest; // update new range end
            }
        }
        cout<<jumps<<endl;
    }
