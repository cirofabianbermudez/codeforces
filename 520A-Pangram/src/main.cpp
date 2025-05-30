#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  string s;
  cin >> n >> s;
  
  unordered_map<char, int> m;
  
 if (n < 26) {
  cout << "NO";
 } else {
  
   char c;
   for (int i = 0; i < n; i++) {
     c = toupper(s[i]);
     m[c] += 1;
   }

   cout << ( (m.size() == 26) ? "YES" : "NO" );

 }

  cout << "\n";
  
  return 0;
}
