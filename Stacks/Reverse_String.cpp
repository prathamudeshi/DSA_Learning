#include<bits/stdc++.h>
using namespace std;

string rev(string s){
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        stk.push(s[i]);
    }
    string ans="";
    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }
    return ans;
}

int main(){
    cout<<rev("Pratham")<<endl;
}