#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  int upper = 0, lower = 0;
  for (size_t i = 0 ; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      upper++;
    } else {
      lower++;
    }
  }
  
  if (upper > lower) {
    // for (size_t i = 0 ; i < s.size(); i++) {
    //   s[i] = toupper(s[i]);
    // }
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  } else {
    // for (size_t i = 0 ; i < s.size(); i++) {
    //   s[i] = tolower(s[i]);
    // }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  
  cout << s;

  return 0;
}
