#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  int rsp;
  bool ck = true;
  for (int i = 0; i < n; i++) {
    cin >> rsp;
    if (rsp == 1) {
      ck = false;
      break;
    }
  }
  
  cout << ( (ck) ? "EASY" : "HARD");

  return 0;
}
