#include<bits/stdc++.h>
using namespace std;

int bin_to_int(string s){
    int ans = 0;
    for(int i=0;i<s.size();i++){
        ans = ans*2 + (s[i]-'0');
    }
    return ans;
}

int main(){
    cout<<bin_to_int("1010")<<endl;
    return 0;
}