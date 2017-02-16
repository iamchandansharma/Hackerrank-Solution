/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    
	string T;
    int i,c,H;
    cin>>T;
    H = (pow(10,1)*(T[0]-'0'))+(pow(10,0)*(T[1]-'0'));
    if(T[8]=='P'){
        if(H==12)
            H=12;
        else
            H=H+12;
    }
    else{
        if(H==12)
            H=0;
    }
    if(H==0)
        cout<<H<<H;
    else if(H<10)
        cout<<"0"<<H;
    else
        cout<<H;
    for(i=2;i<8;i++)
        cout<<T[i];
    return 0;
}
