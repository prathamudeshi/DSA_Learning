#include<bits/stdc++.h>
using namespace std;

bool check_set_bit(int n, int pos){
    return (n&(1<<pos));
}

int main(){
    cout<<check_set_bit(10, 3);
    return 0;
}