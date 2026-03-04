#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ui = unsigned int;
using ull = unsigned long long;
#define MAX 1e6

void solve() {
    vector<ll> freq(11, 0);
    ll x, maxi=-1, res;

    for(int i=1; i<11;i++) {
        cin>>x;
        freq[x]++;
    }

    for(int i=1; i<11;i++) maxi=max(maxi, freq[i]);

    for(int i=10; i>=1;i--) 
        if(maxi==freq[i]) {
            res=i;
            break;
        }

    cout<<res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}