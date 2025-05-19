#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int in, cnt, ck;
  cnt = 0;

  for (int i = 0; i < n; i++) {

    ck = 0;
    for (int j = 0; j < 3; j++) {
      cin >> in;
      ck += in;
    }

    if (ck >= 2) {
      cnt += 1;
    }

  }

  cout << cnt;

  return 0;
}
