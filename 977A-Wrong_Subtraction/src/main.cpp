#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  
  for (int i = 0; i < k; i++) {
    if (n%10 != 0) {
      n--;
    } else {
      n /= 10;
    }
  }

  cout << n;

  return 0;
}
