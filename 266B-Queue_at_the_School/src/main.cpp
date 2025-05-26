#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, t;
  string s;
  cin >> n >> t >> s;

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n-1; j++) {
      if (s[j] < s[j+1]) {
       swap(s[j], s[j+1]) ;
       j++;
      }
    }
  }
  
  cout << s << "\n";
  
  return 0;
}
