#include<bits/stdc++.h>
using namespace std;

void swap_fn(int a, int b){
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
}

int main(){
    swap_fn(5,10);
    return 0;
}