#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {

    int n, M, k, res = 0; cin>> n >> M >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int l = 0, r = 0;

    while( r < n ){
        
        while( a[r] - a[l] <= M && r - l + 1 <= k ){
            r++;
        }

        res++;
        l = r;
    }

    cout << res << "\n";
   
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}