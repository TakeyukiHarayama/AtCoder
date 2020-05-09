#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[]) {
  double R;
  cin >> R;
  printf("%.20f\n", 2.0 * acos(-1.0) * R);
  return 0;
}
