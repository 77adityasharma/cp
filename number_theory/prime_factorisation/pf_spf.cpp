//spf - smallest prime factor
using ll = long long;

const ll N = 1e7;
vector<ll> spf(N);

// takes log n time, faster than trial division for large test cases, as spf is created only once
vector<ll> getPrimeFactors(ll n) {
    vector<ll> primeFactors;
    
    while(n > 1) {
      primeFactors.push_back(spf[n]);
      n /= spf[n];
    }
    
    return primeFactors;
}

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