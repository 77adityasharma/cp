vector<ll> getPrimeFactors(ll n) {
    vector<ll> primeFactors;
    
    for(ll i=2; i*i<=n; i++) {
      if(n % i == 0) {
        primeFactors.push_back(i);
        while(n % i == 0) {
          n /= i;
        }  
      }
    }
    
    if(n > 1) primeFactors.push_back(n);
    
    return primeFactors;
}