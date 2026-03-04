#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ul = unsigned long;
using ui = unsigned int;
using ull = unsigned long long;
using ld = long double;
#define MAX 1e6
#define c sqrt(3)/2

void solve() {
    ll n, k, h, ans=0, sum=0; cin>>n>>k>>h;
    vector<ll> a(n);

    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }

    for(int i=1; i<=n;i++) {
        if(sum/(i*k)<h || (sum/(i*k)==h && sum%(i*k)==0)) {
            ans=i;
            break;
        }
    }

    if(!ans) cout << -1;
    else cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}