#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
   int k, p; cin>>k>>p;
   vector<int> r(p);

   for( int i=0; i<p;i++) cin>>r[i];

   while(k--){
    int n, m; cin>>n;
    m = n;
    map<int, int> bag;

    while(n){
    
        int rice, min_rice = INT_MAX, id=0;

        for( int i=0; i<p; i++){

            if( n >= r[i]){
                rice = n%r[i]; 
            }else{
                rice = r[i]-n;
            }

            if( rice < min_rice ){
                min_rice = rice;
                id = i;
            }
           
        }

        bag[r[id]]++;
        

        if( n >= r[id]){
            n = n - r[id];
        }else{
            n = 0;
        }
        
    }

    int s = 0;

    for( auto i: bag){
        s += i.first * i.second;
    }

    cout << abs(m - s) << "\n";
        
   }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}