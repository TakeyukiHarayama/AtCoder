#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B, C;
  cin >> A >> B >> C;
  int res = min(B / A, C);
  cout << res << endl;

  return 0;
}
