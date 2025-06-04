#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  unordered_map<string, int> um = {
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20}
  };
  
  int n;
  cin >> n;

  string s;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> s;
    cnt += um[s];
  }
  
  cout << cnt << "\n";

  return 0;
}
