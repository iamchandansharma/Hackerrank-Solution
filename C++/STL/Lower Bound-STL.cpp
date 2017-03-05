/**
    Created By Chandan Sharma
**/    
#include <bits/stdc++.h>

using namespace std;

int main() {
   
   int N,q,y;
   cin >> N;
   vector <int> in;
   for (int i=0; i<N; i++){
       int temp;
       cin >> temp;
       in.push_back(temp);
   }
   cin >> q;
   for (int i=0; i<q; i++){
       cin >> y;
       vector<int>::iterator low = lower_bound(in.begin(), in.end(), y);
       if (in[low - in.begin()] == y)
           cout << "Yes " << (low - in.begin()+1) << endl;
       else
           cout << "No " << (low - in.begin()+1) << endl;
   }
   return 0;
}
