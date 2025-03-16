#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> arr, int ans, int i){
    if(i == arr.size())
        return ans;
    return (arr, ans+arr[i], i+1);
}

int main(){
    vector<int> arr = { 10, 4, 3, 4, 5, 6};
    cout<<sum(arr, 0, 0);
    return 0;
}