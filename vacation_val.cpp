//vaction at atcoder problem
#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int n,l,r;
     cin >> n >> l >> r;
     string s;
     cin >> s;
     for(int i=l-1;i<=r-1;i++){
          if(s[i] !='o'){
               cout << "No" << endl;
               return 0;
          }
     }
     cout << "Yes" << endl;
     return 0;
}
