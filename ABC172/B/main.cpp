#include <iostream>
#include <string>

using namespace std;

int main(void) {
  int count = 0;
  string s, t;
  cin >> s;
  cin >> t;

  for(int i = 0; i<s.size();i++){
    if(s[i] != t[i]){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}