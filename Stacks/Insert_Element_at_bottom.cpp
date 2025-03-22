#include<bits/stdc++.h>
using namespace std;

void soln(stack<int> &stk, int k){
    if(stk.empty()){
        stk.push(k);
        return;
    }
    else{
        int temp = stk.top();
        stk.pop();
        soln(stk, k);
        stk.push(temp);return;
    }
}

int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    soln(stk, 9);
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}