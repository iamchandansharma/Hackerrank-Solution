/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> a,b;
    int A=0,B=0;
    for(int i = 0 ; i < 3 ; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i = 0 ; i < 3 ; i++){
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    for(int i = 0 ; i < a.size(); i++){
        if (a[i]>b[i])
            A++;
        if(a[i]<b[i])
            B++;
    }
    cout<<A<<" "<<B;
    return 0;
}
