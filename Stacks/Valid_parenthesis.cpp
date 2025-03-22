#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "{[()]}";
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            if(stk.empty() || stk.top()!='('){
                cout<<"Invalid"<<endl;
                return 0;
            }
            stk.pop();
        }
        else if(s[i]=='}'){
            if(stk.empty() || stk.top()!='{'){
                cout<<"Invalid"<<endl;
                return 0;
            }
            stk.pop();
        }
        else if(s[i]==']'){
            if(stk.empty() || stk.top()!='['){
                cout<<"Invalid"<<endl;
                return 0;
            }
            stk.pop();
        }
    }
    if(stk.empty()){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}