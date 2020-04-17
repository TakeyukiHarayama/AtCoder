#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int x, a, b;
  cin >> x;

  a = (x / 500);
  b = x - a * 500;
  cout << a * 1000 + (b / 5) * 5 << endl;

  return 0;
}
