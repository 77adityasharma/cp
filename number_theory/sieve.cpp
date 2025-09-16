#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
const ll N = 1e7;
vector<ll> isPrime(N, 1);

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    isPrime[0] = 0, isPrime[1] = 0;
    for(ll i=2; i*i<N; i++) {
      if(!isPrime[i]) continue;
      
      for(ll j=i*i; j<N; j+=i) {
        isPrime[j] = 0;
      }
    }
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    // solve();

    return 0;
}
