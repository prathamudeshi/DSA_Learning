//Count minimum bit flips to reach the goal
//start = 10 ... goal = 7
//How many bits need to be changed to reach the goal?
//1010 -> 0111 ... 3 bits are changed

#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
    int count = 0;
    while(n>0){
        count += n&1;
        n >>= 1;
    }
    return count;
}

int minimum_bit_flips(int start, int end){
    // return count_set_bits(start^end);
    return start^end;
}


int main(){
    cout<<minimum_bit_flips(3, 4)<<endl;
    return 0;
}