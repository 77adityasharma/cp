//spf - smallest prime factor
using ll = long long;

const ll N = 1e7;
vector<ll> spf(N);

int main() {
    for(ll i=0; i<N; i++) {
      spf[i] = i;
    }
    
    for(ll i=2; i*i<N; i++) {
      if(spf[i] == i) {
        for(ll j=i*i; j<N; j+=i) {
          if(spf[j] == j) {
            spf[j] = i;
          }
        }
      }
    }
    
    //uses sieve, same complexity
}