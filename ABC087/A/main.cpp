#include <iostream>

using namespace std;

int main(void) {
  int X, A, B;
  cin >> X;
  cin >> A;
  cin >> B;

  X -= A;
  cout << X % B << endl;
  return 0;
}