#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n, x, t=0;cin>>n>>x;
    ll num;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for( int i=0; i<n; i++){
        t+= x/a[i];
        num = a[i];
        
        for( int j=0; j<i; j++){
            t-= x/(a[i]*a[j]);
            if( a[i]%a[j] != 0){
                num*=a[j];
            }
            cout << a[i] << " " << a[j] << " " << t << "\n";  
        }
        cout << num << " " << x/num << "\n";
        if( i > 1){
            t-= x/num;
        }

    }
    cout << t << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    solve();
    
    return 0;
}