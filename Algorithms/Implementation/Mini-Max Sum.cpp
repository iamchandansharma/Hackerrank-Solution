/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
    
	vector <long long int > in; 
    long long int mi = INT_MAX,mx = INT_MIN,sum = 0;
    for (int i = 0 ; i < 5 ; i++){
        long long int temp ;
        cin >>temp;
        mi = min(mi,temp);
        mx = max (mx,temp);
        sum += temp;
    }
    cout<<sum - mx<<" "<<sum - mi;
    return 0;
}
