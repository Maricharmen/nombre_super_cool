#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ui = unsigned int;
using ull = unsigned long long;
#define MAX 1e6

void solve() {
   ll n; cin>>n;
   vector<ll> a(n);

   for(int i=0;i<n;i++) cin>>a[i];

   sort(a.begin(), a.end());

   cout<<a[(n+1)/2-1];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}