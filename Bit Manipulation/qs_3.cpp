//In the given array every number appears twice except one. Find that number
// 4 1 2 1 2
// ^
//4 appears once
//
// --- INTUITION ---
// When we xor a number with itself the answer is 0
// And when we xor a number with 0 it returns itself

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int ans = 0;
    for(auto x:arr){
        ans ^= x;
    }
    return ans;
}

int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    cout<<solve(arr)<<endl;
}