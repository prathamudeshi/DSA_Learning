#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    stack<int> stk;
    vector<int> ans(n);
    stk.push(-1);
    for(int i=0;i<n;i++){
        while(stk.top()!=-1 && arr[stk.top()]>=arr[i]){
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(i);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = prevSmallerElement(arr, n);
    
    cout << "Next Smaller Elements: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}