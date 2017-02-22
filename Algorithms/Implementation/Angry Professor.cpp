/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
	
    int t,n,k,counter;
    cin>>t;
    while(t--){
        cin>>n>>k;
        counter = 0;
        for(int i = 0 ; i < n ; i++){
            int temp;
            cin>>temp;
            if(temp <= 0)
                counter++;
        }
        if(counter>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
