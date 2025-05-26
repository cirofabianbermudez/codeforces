#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, p, q;
  cin >> n;
  
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    if (q - p >= 2) {
      cnt++;
    }

  }

  cout << cnt << "\n";

  return 0;
}
