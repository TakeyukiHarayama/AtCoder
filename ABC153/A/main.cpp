#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int H, A;
  int count = 1;
  int d;

  cin >> H >> A;
  H -= A;
  while (H > 0) {
    H -= A;
    count++;
  }
  cout << count << endl;

  return 0;
}
