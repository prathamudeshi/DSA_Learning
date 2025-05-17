#include<bits/stdc++.h>
using namespace std;

stack<int> stk;
void reverse(queue<int> &q){
    if(q.empty()){
        return;
    }
    stk.push(q.front());
    q.pop();
    reverse(q);
    q.push(stk.top());
    stk.pop();
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(4);

    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}