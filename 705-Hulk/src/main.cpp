#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  string s[] = {"I hate ", "I love "};

  for (int i = 0; i < n; i++) {
    cout << s[i%2];
    cout << ( (i == n-1) ? "it" : "that ");
  }

  cout << "\n";

  return 0;
}
