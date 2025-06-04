#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  // Read the information
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;

  /* Brute force */
  // int cnt = 0;
  // for (int i = 1; i <= d; i++) {
  //   if (i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
  //     cnt++;
  //   }
  // }
  // cout << cnt << "\n";

  /* Using some math */
  int a = d/k;
  int b = d/l;
  int c = d/m;
  int e = d/n;
  int s1 = a + b + c + e;

  int ab = d/lcm(k,l);
  int ac = d/lcm(k,m);
  int ae = d/lcm(k,n);
  int bc = d/lcm(l,m);
  int be = d/lcm(l,n);
  int ce = d/lcm(m,n);
  int s2 = ab + ac + ae + bc + be + ce;
  
  int abc = d/lcm(lcm(k,l), m);
  int abe = d/lcm(lcm(k,l), n);
  int ace = d/lcm(lcm(k,m), n);
  int bce = d/lcm(lcm(l,m), n);
  int s3 = abc + abe + ace + bce;
  
  int abce = d/lcm(lcm(lcm(k,l), m), n);
  int s4 = abce;
  
  int cnt = s1 - s2 + s3 - s4;
  cout << cnt << "\n";
  
  return 0;
}
