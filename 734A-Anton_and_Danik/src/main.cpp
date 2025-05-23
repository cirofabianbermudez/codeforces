#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  string s;
  cin >> n >> s;
  
  int d_cnt = 0, a_cnt = 0;
  
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == 'A') { 
      a_cnt++;
     } else if (s[i] == 'D') { 
      d_cnt++;
     }
  }
  
  string r;
  if (a_cnt > d_cnt) {
    r = "Anton";
  } else if (a_cnt < d_cnt) {
    r = "Danik";
  } else {
    r = "Friendship";
  }
  
  cout << r;
  
  return 0;
}
