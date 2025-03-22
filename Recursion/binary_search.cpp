#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int l, int r, int key){
    if(l>=r){
        return -1;
    }
    int mid = (r+l)/2;
    if(arr[mid] == key)
        return mid;
    else if(arr[mid]<key){
        bs(arr,mid+1, r, key);
    }
    else{
        bs(arr, l, mid-1, key);
    }
}

int main(){
    vector<int> arr = { 1, 2, 3, 4, 5, 6};
    cout<<bs(arr,0,arr.size()-1,3);
    return 0;
}


// 0 1 2 3 4 5 6
//     -       -