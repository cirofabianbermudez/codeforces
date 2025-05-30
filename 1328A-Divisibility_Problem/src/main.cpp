#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, a, b, cnt;
  cin >> n;

  /* Brute force solution */
  // for (int i = 0; i < n; i++) {
  //   cin >> a >> b;
  //   cnt = 0;
  //   while (a%b != 0) {
  //     a++;
  //     cnt++;
  //   }
  //   cout << cnt << "\n";
  // }
  
  /* Math solution */
  int check;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cnt = 0;
    check = a%b;
    if (check != 0){
      a += b - check;
      cnt += b - check;
    }
    cout << cnt << "\n";
  }
  
  return 0;
}
