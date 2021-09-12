ll pow_fast (ll a,ll b){
  ll ans = 1, x = a;
  while (b!=0){
    if (b&1) ans = ((ans % mod) * x) % mod;
    x = ((x % mod) * x) % mod;
    b>>= 1;
  }
  return ans % mod;
}
