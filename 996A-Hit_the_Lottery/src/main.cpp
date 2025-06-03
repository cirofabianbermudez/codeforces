#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  /* Greedy */
  int cnt, t;
  array<int, 5> arr = {100, 20, 10, 5, 1};
  cnt = 0;
  for (int i = 0; i < 5; i++) {
    t = n/arr[i];
    if (t > 0) {
      //n -= t*arr[i];
      n = n%arr[i];
      cnt += t;
    }
    if (n == 0) {
      break;
    }
  }
  cout << cnt << "\n";

  /* Dynamic Programming (DP) */
  // array<int, 5> arr = {1, 5, 10, 20, 100};

  // dp[x] minimum number of coins to add exactly x
  // vector<int> dp(n+1, INT_MAX);
  // dp[0] = 0;

  // for (int i = 1; i <= n; i++) {
  //   for (int c : arr) {
  //     if (c <= i && dp[i - c] != INT_MAX) {
  //       dp[i] = min( dp[i], dp[i - c] + 1);
  //     }
  //   }
  // }

  // cout << dp[n] << "\n";


    // for (int j = 0; j < 5; j++) {
    //   if (arr[j] <= i && dp[i - arr[j]] != INT_MAX) {
    //     dp[i] = min( dp[i], dp[i - arr[j]] + 1 );
    //   }
    // }

  //       1 3 4 
  // dp[i] 0 1 2 1 1 2 2
  //    i  0 1 2 3 4 5 6 7 8 9
  
  return 0;
}
