#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int l = 0;   // String length
  string str;
  for (int i = 0; i < n; i++) {
    cin >> str;
    l = str.length();
    if (l > 10) {
      cout << str[0] << l-2 << str[l-1];
    } else {
      cout << str;
    }
    cout << "\n";
  }

  return 0;
}

