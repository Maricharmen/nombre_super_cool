#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ui = unsigned int;
using ull = unsigned long long;
vector<ull> potencias;

void binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    
    potencias.push_back(res-1);
}

void solve() {
   ll n; cin>>n;

   auto it = find(potencias.begin(), potencias.end(), n);

   if(it != potencias.end()) cout<<"Second\n";
   else cout <<"First\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;

    for(int i=0; i<=59;i++) {
        binpow(2, i);
    }

    while(t--) solve();
    
    return 0;
}