#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  /* Simple solution with map */
  // int v;
  // map<long long, int> m;
  // for (int i = 0; i < 4; i++) {
  //   cin >> v;
  //   m[v] += 1;
  // }
  // cout << 4 - m.size() << "\n";
  
  /* Simple solution with array*/
  long long v;
  int cnt = 0;

  array<long long, 4> arr = {};
  for (int i = 0; i < 4; i++) {
    cin >> v;
    arr[i]  = v;
  }
  
  sort(arr.begin(), arr.end());

  for (int i = 0; i < 3; i++) {
    if (arr[i] == arr[i+1]) {
      cnt++;
    }
  }
  cout << cnt << "\n";

  /* Solution with a unordered_set*/
  // long long v;
  // unordered_set<long long> s;
  // for (int i = 0; i < 4; i++) {
  //   cin >> v;
  //   s.insert(v);
  // }

  // cout << 4 - s.size() << "\n";

  return 0;
}
