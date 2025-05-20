#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int row, col, m;
  for (int i = 0; i < 5; i++) {    // Row
    for (int j = 0; j < 5; j++) {  // Column
      cin >> m;
      if (m == 1) {
        row = i;
        col = j;
      }
    }
  }
  
  cout << abs(row - 2) + abs(col - 2);

  return 0;
}
