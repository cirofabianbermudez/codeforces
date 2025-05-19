#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= a[k-1] && a[i] > 0 ) {
      cnt += 1;
    } else {
      break;
    }
  }

  cout << cnt;

  return 0;
}

