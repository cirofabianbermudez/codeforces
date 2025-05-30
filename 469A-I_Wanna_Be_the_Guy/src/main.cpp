#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, p, q, len;
  cin >> n;
  
  unordered_set<int> a;
  for (int i = 0; i < 2; i++) {
    cin >> p;
    for (int j = 0; j < p; j++) {
      cin >> q;
      a.insert(q); 
    }
  }

  len = a.size();
  cout << ( ( len == n) ? "I become the guy." : "Oh, my keyboard!" );
  cout << "\n";

  return 0;
}
