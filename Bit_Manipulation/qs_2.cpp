// Print all the Subsets of an array
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(int n, vector<int> arr){
    vector<vector<int>> subsets;
    for(int i=0;i<pow(2,n);i++){
        vector<int> temp;
        int gg = i;
        for(int j=0;j<n; j++){
            if(gg & 1)
                temp.push_back(arr[j]);
            gg >>= 1;
        }
        subsets.push_back(temp);
    }
    return subsets;
}

int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans = subsets(arr.size(), arr);
    for(int i=0;i<ans.size(); i++){
        for(int j=0;j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}