#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, p;
  cin >> n;
  
  double r = 0;
  for (int i = 0; i < n; i++) {
    cin >> p;
    r += static_cast<double>(p)/100.0;
  }
  
  //printf("%.12f\n", (r*100.0)/n);
  cout << fixed << setprecision(12) << (r*100.0)/n << "\n";

  return 0;
}
