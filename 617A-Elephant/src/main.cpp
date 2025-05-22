#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Brute force solution
  // int x, cnt, t;
  // cin >> x;
  
  // cnt = 0;
  // t = 5;
  // while (x > 0) {
  //   if (x - t >= 0) {
  //     x -= t;
  //     cnt++;
  //     t = 5;
  //   } else {
  //     t--;
  //   }
  // }
  // cout << cnt;
  // 

  int x, cnt, t;
  cin >> x;
  
  t = 5;
  cnt = 0;
  while (x > 0) {
    cnt += x/t;
    x = x%t;
    t--;
  }

  cout << cnt;

  return 0;
}
