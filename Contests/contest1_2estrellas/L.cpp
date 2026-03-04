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
    ll h, k;cin>>h>>k;
    ld alt=h;

    for(int i=0;i<k;i++)
        alt/=2;

    ld area = (alt*alt)/(2*c);
    cout<<area;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}