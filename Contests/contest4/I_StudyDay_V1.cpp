#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {

    ll n; cin>> n;
    vector<ll> a(n+1);
    string res = "";
    for (ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> O(n+1), M(n+1);

    O[0] = 0; M[0] = 0;

    for( ll i=1; i<=n; i++ ) {
        O[i] = max( O[i-1], M[i-1]) + a[i];
        M[i] = O[i-1] + 2*a[i]; 
    }

    ll i = n, state = (O[n] > M[n]) ? 0 : 1;

    while(i > 0){
        if(state){
            res += "M";
            state = 0;
        } else {
            res += "O";
            if(O[i-1] > M[i-1]) state = 0;
            else state = 1;
        }
        i--;
    }

    cout << max( O[n], M[n]) << "\n";
    cout << string(res.rbegin(), res.rend()) << "\n";

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}