#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  // Optimized version
  int cp, idx;
  bool unique;

  while (true) {
    ++n;
    bool seen[10] = {false};
    cp = n;
    unique = true;
    for (int i = 0; i < 4; i++) {
      idx = cp%10;
      if (seen[idx]) {
        unique = false;
        break;
      }
      seen[idx] = true;
      cp /= 10;
    }
    
    if (unique) {
      cout << n << "\n";
      break;
    }
    
  }
  

  // Hashmap version
  // map<int, int> m;
  // int cp;
  
  // while(true){
  //   cp = ++n;
  //   while (cp > 0) {
  //     m[cp%10] += 1;
  //     cp /= 10;
  //   }

  //   if (m.size() == 4){
  //     break;
  //   } 

  //   m.clear();

  // }
  
  // cout << n;

  return 0;
}
