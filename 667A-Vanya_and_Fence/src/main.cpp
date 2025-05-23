#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, h, c;
  cin >> n >> h;
  
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c <= h) {
      cnt += 1;
    } else {
      cnt += 2;
    }
  }
  
  cout << cnt;

  return 0;
}
