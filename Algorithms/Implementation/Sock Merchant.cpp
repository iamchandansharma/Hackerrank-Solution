/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
	int in[100];
    int n,sum = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int no;
        cin>>no;
        in[no]++;
    }
    for(int i = 1 ; i <= 100; i++){
        sum += in[i]/2;
    }
    cout<<sum;
    return 0;
}
