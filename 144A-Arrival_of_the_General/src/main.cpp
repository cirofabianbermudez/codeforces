#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, a;
  cin >> n;

  /* Direct solution */
  // First capture
  // int min, min_idx, max, max_idx;
  // cin >> a;
  // max = a; max_idx = 0;
  // min = a; min_idx = 0;

  // for (int i = 1; i < n; i++) {
  //   cin >> a;

  //   if (a > max) {
  //     max = a;
  //     max_idx = i;
  //   }
    
  //   if (a <= min) {
  //     min = a;
  //     min_idx = i;
  //   }

  // }
  
  // bool check =  max_idx > min_idx;
  // int res = max_idx + (n - 1 - min_idx);
  // cout << ( (check) ? res - 1 : res) << "\n";
  
  /* Alt solution */
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> a;
    v[i] = a;
  }

  auto min_rit = min_element(v.rbegin(), v.rend());
  auto max_it  = max_element(v.begin(), v.end());
  
  size_t min_idx = (v.size() - 1) - distance(v.rbegin(), min_rit);
  size_t max_idx = distance(v.begin(), max_it);
  
  bool check =  max_idx > min_idx;
  int res = max_idx + (n - 1 - min_idx);
  cout << ( (check) ? res - 1 : res) << "\n";

  // int min_val = *min_rit;
  // int max_val = *max_it;

  // cout << "The min is: " << min_val << ", the position is: " << min_idx << "\n";
  // cout << "The max is: " << max_val << ", the position is: " << max_idx << "\n";

  return 0;
}
