/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <int> in;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }
    sort(in.begin(),in.end());
    for(int i=0;i<in.size();i++)
        cout<<in[i]<<" ";
    return 0;
}
