#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  vector<int> arr;
  
  string s;
  //getline(cin, s);
  cin >> s;

  for (size_t i = 0; i < s.size(); i += 2) {
    arr.push_back(s[i] - '0');
  }
  
  sort(arr.begin(), arr.end());
  
  char sep = ' ';
  for (size_t i = 0; i < arr.size(); i++) {
    sep = (i == arr.size() - 1) ? ' ' : '+';
    cout << arr[i] << sep;
  }

  return 0;
}
