#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int k, n, w;
  cin >> k >> n >> w;
  
  int total = ( (w+1)*w/2 ) * k;
  int diff  = total-n;

  cout << ( (diff <= 0 ) ? 0 : diff );
  
  return 0;
}
