#include<bits/stdc++.h>
using namespace std;

void toggle_bit(int &n, int pos){
    n = n ^ (1<<pos);
    return;
}

int main(){
    int n = 10;
    toggle_bit(n, 0);
    cout<<n<<endl;
}