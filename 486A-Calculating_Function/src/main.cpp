#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long int n;
  cin >> n;

  /* Brute force */

  // int r = 0;
  // int toggle = -1;
  // for (int i = 1; i <= n; i++) {
  //   r += toggle*i;
  //   toggle *= -1;
  //   cout << r << "\n";
  // }
  
  /* O(1) solution */

  if (n%2) {
   cout << -(n+1)/2 << "\n";   // Odd
  } else {
   cout << (n)/2 << "\n";      // Even
  }

  return 0;
}
