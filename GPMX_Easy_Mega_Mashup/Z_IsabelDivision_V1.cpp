#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
   int n; cin>>n;
   int num = n, count = 0;

   while( n ){
    if( n%10 != 0 && num%(n%10) == 0  ) count++;
    n /= 10;
   }

   cout<<count<<"\n";
   
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}