#include<bits/stdc++.h>
using namespace std;

void remove_last_set_bit(int &n){
    n = n&n-1;
    return;
}

int main(){
    int n = 10;
    remove_last_set_bit(n);
    cout<<n<<endl;
}