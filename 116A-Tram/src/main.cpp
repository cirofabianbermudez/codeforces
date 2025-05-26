#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  // n: stops
  // a: exits
  // b: enters
  int n, a, b;
  cin >> n;
  
  int p = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    p -= a;
    p += b;
    if (p > max) {
      max = p;
    }
  }
  
  cout << max;

  return 0;
}
