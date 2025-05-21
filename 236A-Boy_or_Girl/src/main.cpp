#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  map<char, int> m;
  
  cin >> s;
  
  for (size_t i = 0; i < s.size(); i++) {
    m[s[i]] += 1;
  }
  
  // An alternative is to sort the string and and then count
  // when the character is different
  
  string out;
  if (m.size() % 2 == 0) {
    out = "CHAT WITH HER!";
  } else {
    out = "IGNORE HIM!";
  }
  
  cout << out;

  return 0;
}
