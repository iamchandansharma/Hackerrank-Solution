/**
    Created By Chandan Sharma
**/    

#include <bits/stdc++.h>

using namespace std;

int myarr[6][6];

int maxNo(int lowerOne,int upperOne,int lowerTwo, int upperTwo){
    int sum = 0;
    for(int i = lowerOne ; i <= upperOne; i++){
        for(int j = lowerTwo ; j <= upperTwo; j++){
            sum = sum + myarr[i][j];
        }
    }
    sum = sum - myarr[lowerOne+1][lowerTwo];
    sum = sum - myarr[lowerOne+1][upperTwo];
    return sum;
}
int main(){
    int maximum = -100000;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            cin>>myarr[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0 ;j < 4 ;j++){
            int lowerOne,upperOne,lowerTwo,upperTwo;
            lowerOne = i;
            upperOne = lowerOne + 2;
            lowerTwo = j;
            upperTwo = lowerTwo + 2;
            maximum = max(maximum,maxNo(lowerOne,upperOne,lowerTwo,upperTwo));
        }     
    }
    cout<<maximum;
    return 0;
}