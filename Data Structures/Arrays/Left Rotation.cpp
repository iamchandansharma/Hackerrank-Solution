/**
    Created By Chandan Sharma
**/    

#include <bits/stdc++.h>

using namespace std;

int main() {
	
    long int n,d;
    vector<long int> in;
    cin >>n>>d;
    for(long int i = 0 ;i < n ; i++){
        long int temp;
        cin >>temp;
        in.push_back(temp);
    }
    for(long int i = 0+d; i <in.size(); i++)
        cout<<in[i]<<" ";
    for(long int i = 0;i<d;i++)
        cout<<in[i]<<" ";
        
    return 0;
}
