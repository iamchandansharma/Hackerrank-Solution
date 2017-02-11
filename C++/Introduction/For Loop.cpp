/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
        
    int a,b,i,temp;
    cin>>a>>b;
    if(b<=9){
        for(i=a;i<=b;i++){
        if(i==1)
            cout<<"one\n";
        else if(i==2)
            cout<<"two\n";
        else if(i==3)
            cout<<"three\n";
        else if(i==4)
            cout<<"four\n";
        else if(i==5)
            cout<<"five\n";
        else if(i==6)
            cout<<"six\n";
        else if(i==7)
            cout<<"seven\n";
        else if(i==8)
            cout<<"eight\n";
        else 
            cout<<"nine\n";
            }
    }
    if(b>9){
        for(i=a;i<=9;i++){
        if(i==1)
            cout<<"one\n";
        else if(i==2)
            cout<<"two\n";
        else if(i==3)
            cout<<"three\n";
        else if(i==4)
            cout<<"four\n";
        else if(i==5)
            cout<<"five\n";
        else if(i==6)
            cout<<"six\n";
        else if(i==7)
            cout<<"seven\n";
        else if(i==8)
            cout<<"eight\n";
        else 
            cout<<"nine\n";
        }
        for(i=10;i<=b;i++){
        
        if(i%2==0)
                cout<<"even"<<endl;
        else
                cout<<"odd"<<endl;
        }
    } 
    return 0;
}
	