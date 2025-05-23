#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long int n;
  cin >> n;
 
  int cnt = 0;
  while (n > 0) {
    if ( n%10 == 7 || n%10 == 4) {
      cnt++;
    }
    n /= 10;
  }
  
  if (cnt%10 == 7 || cnt%10 == 4) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
  return 0;
}
