/**
    Created By Chandan Sharma
**/    

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> in;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }
    for(int i = in.size() - 1 ; i >= 0 ; i--)
        cout<<in[i]<<" ";
    return 0;
}
