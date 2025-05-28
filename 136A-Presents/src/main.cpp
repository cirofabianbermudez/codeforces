#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, r;
  cin >> n;

  //vector<int> p(n);
  vector<int> q(n);

  for (int i = 0; i < n; i++) {
    cin >> r;
    //p[i] = r;
    q[ r - 1 ] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << q[i] << " ";
  }
  
  cout << "\n";

  return 0;
}
