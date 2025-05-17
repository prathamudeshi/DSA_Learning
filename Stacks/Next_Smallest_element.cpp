// https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> stk;
    vector<int> ans(n);
    stk.push(-1);
    // ans[0] = stk.top();
    // stk.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        while(stk.top()>=arr[i]){
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(arr[i]);
    }
    return ans;
    // Write your code here.
}cd