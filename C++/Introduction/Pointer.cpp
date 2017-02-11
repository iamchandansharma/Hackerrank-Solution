/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

void update(int *a,int *b) {
   int *c;
   *c= *a;
   *a=*a+*b;
   *b=(*c-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    b=abs(b);
    cout<<a<<endl<<b;

    return 0;
}
