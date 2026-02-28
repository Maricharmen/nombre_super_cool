#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n, m; cin>>n>>m;
    cout << n/m + (n%m > 0 ? 1 : 0) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}