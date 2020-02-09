#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B;
  string S, T, U;

  cin >> S >> T;
  cin >> A >> B;
  cin >> U;

  if (S.compare(U) == 0) {
    cout << A - 1 << " " << B << endl;
  } else {
    cout << A << " " << B - 1 << endl;
  }

  return 0;
}
