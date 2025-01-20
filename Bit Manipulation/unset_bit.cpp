#include<bits/stdc++.h>
using namespace std;

void unset_bit(int &n, int pos){
    n = n & ~(1<<pos);
    return;
}

int main(){
    int n = 10;
    unset_bit(n, 1);
    cout<<n<<endl;
}