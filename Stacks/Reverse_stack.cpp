#include<bits/stdc++.h>
using namespace std;

void rev(stack<char> &stk){
    if(stk.empty()){
        return;
    }
    else{
        int temp = stk.top();
        stk.pop();
        rev(stk);
        stk.push(temp);
    }
}

int main(){
    stack<char> stk;
    stk.push('P'); stk.push('r'); stk.push('a'); stk.push('t'); stk.push('h'); stk.push('a'); stk.push('m');
    rev(stk);
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    
    return 0;
}