#include <iostream>

using namespace std;

int main(void) {
  int a, res;
  cin >> a;
  a % 1000 == 0 ? res = 0 : res = 1000 - (a % 1000);
  cout << res << endl;
  return 0;
}