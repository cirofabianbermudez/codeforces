#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  // Read the information
  int d;
  array<int, 4> arr;
  array<int, 4> cnt;
  
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }

  cin >> d;

  /* Brute force */
  // unordered_set<int> s;
  // int cnt, t;
  // for (int i = 0; i < 4; i++) {
  //   t = arr[i];
  //   while (t <= d) {
  //     s.insert(t);
  //     t += arr[i];
  //   }
  // }
  // cout << s.size() << "\n";

  /* Using some math */
  for (int i = 0; i < 4; i++) {
    cnt[i] = floor(d/);
  }


  return 0;
}
