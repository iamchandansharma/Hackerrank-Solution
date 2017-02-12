/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
	
    int A[1000],N,sum=0,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>A[i];
        sum=sum+A[i];
    }
    cout<<sum;
    return 0;
}
