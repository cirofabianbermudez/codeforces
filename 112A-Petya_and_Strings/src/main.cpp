#include <bits/stdc++.h>
using namespace std;

#define ll long long

void toUpper(string &str){
  int l = str.length();
  for (int i = 0; i < l; i++){
    // if (str[i] >= 'a' && str[i] <= 'z') {
    //   str[i] -= 32;
    // }
    str[i] = toupper(str[i]);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s1, s2;
  cin >> s1 >> s2;

  int c = 0;
  toUpper(s1);
  toUpper(s2);
  if (s1 > s2) {
    c = 1;
  } else if (s1 < s2) {
    c = -1;
  } else {
    c = 0;
  }
  
  cout << c;

  // int c = 0;
  // for (int i = 0; i < l; i++) {
  //   toUpper(s1);
  //   toUpper(s2);
  //   if (s1[i] > s2[i]) {
  //     c = 1;
  //     break;
  //   } else if (s1[i] < s2[i]){
  //     c = -1;
  //     break;
  //   } else {
  //     c = 0;
  //   }
  // }

  // cout << ( (c > 0) ?  1 : 
  //         ( (c < 0) ? -1 : 0) );
  
  return 0;
}
