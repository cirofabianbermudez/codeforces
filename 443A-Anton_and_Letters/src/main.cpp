#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  getline(cin, s);
  
  unordered_set<char> c;
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      c.insert(s[i]);
    }
  }
  
  cout << c.size() << "\n";

  return 0;
}
