#include<bits/stdc++.h>
using namespace std;

int count_set_bit(int n){
    int count = 0;
    while(n>0){
        count += n&1;
        n >>= 1;
    }
    return count;
}

int main(){
    int n = 10;
    cout<<count_set_bit(n)<<endl;
}