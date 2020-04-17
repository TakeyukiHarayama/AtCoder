#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  long double L;
  cin >> L;
  printf("%Lf\n", (L / 3.0) * (L / 3.0) * (L / 3.0));
  return 0;
}
