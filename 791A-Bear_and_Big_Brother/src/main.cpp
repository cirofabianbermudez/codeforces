#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a, b;
  cin >> a >> b;
  
  int cnt = 0;
  while (a <= b) {
    a = 3*a;
    b = 2*b;
    cnt++;
  }
  
  cout << cnt;

  return 0;
}
