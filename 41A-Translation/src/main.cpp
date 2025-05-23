#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string orig, trans;
  cin >> orig >> trans;
  
  // int size = orig.size();
  // bool flag = true;
  // for (int i = 0; i < size; i++) {
  //   if (orig[i] != trans[size-1-i]) {
  //     flag = false;
  //     break;
  //   }
  // }
  
  // cout << ( flag ? "YES" : "NO" );
  
  reverse(orig.begin(), orig.end());
  cout << ( (orig == trans) ? "YES" : "NO" );

  
  return 0;
}
