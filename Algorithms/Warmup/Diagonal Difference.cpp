/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {  
    int A[1000][1000],N,i,j,sum1=0,sum2=0;
    cin>>N;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            cin>>A[i][j];
    }
    for(i=0,j=0;i<N;i++,j++)
        sum1=sum1+A[i][j];
       
    for(i=0,j=N-1;i<N;i++,j--)
        sum2=sum2+A[i][j];
    cout<<abs(sum1-sum2);
    return 0;
}