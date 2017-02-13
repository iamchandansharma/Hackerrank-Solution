/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {

    int A[100],n,i;
    float cp=0,cn=0,cz=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>A[i];
    
    for(i=0;i<n;i++){
        if(A[i]>0)
            cp++;
        else if(A[i]==0)
            cz++;
        else
            cn++;
    }
    printf("%.3f",cp/n);
    printf("\n%.3f",cn/n);
    printf("\n%.3f",cz/n);
    return 0;    
}
