/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    
	int x1,v1,x2,v2,sum1,sum2,flag = 0;
    cin>>x1>>v1>>x2>>v2;
    sum1 = x1;
    sum2 = x2;
    if(x2 > x1 && v2 > v1)
        cout<<"NO";
    else{
        if(x2>x1 && abs(v1-v2) == 0)
            cout<<"NO";
        else if((abs(x1-x2)) % (abs(v1-v2)) == 0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
