#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ui = unsigned int;
using ull = unsigned long long;
#define MAX 1e6

void solve() {
    string s; cin >>s;
    bool flag=false;
    ll abiertos=0,cerrados=0;

    for(int i=0;i<s.size();i++) {
        if(s[i]==')') cerrados++;
        else abiertos++;

        if(cerrados>abiertos) {
            flag=true;
            break;
        }
    }

    if(cerrados!=abiertos) flag=true;

    if(flag) cout << "No\n";
    else cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}