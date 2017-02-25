/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int height(int n) {
    int th=1;
    int temp=1; //temp is used for spring and summer.
    for(int i=0;i<n;i++){
        if(temp==1){
            th*=2;
            temp=0;
        }
        else{
            th=th+1;
            temp=1;
        }
    }
    return th;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
