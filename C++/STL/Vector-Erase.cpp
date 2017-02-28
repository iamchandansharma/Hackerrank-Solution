/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> in;
    int N,a,b,x;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }
    cin>>x>>a>>b;
    in.erase(in.begin()+x-1);
    in.erase(in.begin()+a-1,in.begin()+b-1);
    cout<<in.size()<<endl;
    for(int i = 0;i<in.size();i++)
        cout<<in[i]<<" ";
    return 0;
}
