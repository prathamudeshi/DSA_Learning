#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr, int i){
    if(i == arr.size())
        return 1;
    if(arr[i] > arr[i+1])
        return 0;
    return isSorted(arr, i+1);
}

int main(){
    vector<int> arr = { 1, 4, 3, 4, 5, 6};
    cout<<isSorted(arr, 0)<<endl;
    return 0;
}