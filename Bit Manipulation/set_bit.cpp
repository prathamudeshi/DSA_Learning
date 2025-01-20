#include<bits/stdc++.h>
using namespace std;

void set_bit(int &n, int pos){
    n = n | (1<<pos);
    return;
}

int main(){
    int n = 10;
    set_bit(n, 0);
    cout<<n<<endl;
}