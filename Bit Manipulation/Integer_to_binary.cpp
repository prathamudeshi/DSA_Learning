#include<bits/stdc++.h>
using namespace std;

string int_to_bin(int n){
    string res = "";
    while(n!=1){
        n%2 == 0? (res += '0') : (res += '1');
        n/=2;
    }
        if(n==1){
            res += '1';
        }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    cout<<int_to_bin(10)<<endl;
}