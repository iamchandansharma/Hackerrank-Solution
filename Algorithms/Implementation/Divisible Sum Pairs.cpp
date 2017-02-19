/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n,k;
    cin>>n>>k;
    int counter = 0;
    vector<int> in;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }
    for(int i = 0; i < in.size() - 1 ; i++){
        for(int j = i+1; j < in.size(); j++){
            if((in[i] + in[j]) % k == 0 )
                counter++;
        }
    }     
    cout<<counter;
    return 0;
}
