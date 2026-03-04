#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ul = unsigned long;
using ui = unsigned int;
using ull = unsigned long long;
using ld = long double;
#define MAX 1e6
#define c sqrt(3)/2

int gcd(int a, int b) {
    if (b == 0) return a;
    
    return gcd(b, a%b);
}

void solve() {
    ll n, gcdd; cin>>n;
    vector<ll> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    gcdd = gcd(a[0], a[1]);
    for(int i=2;i<n;i++) gcdd = gcd(gcdd, a[i]);

    if(gcdd==1) cout<<"Naya";
    else cout << "Hassan";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}