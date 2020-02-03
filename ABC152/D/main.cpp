#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void search(int x, int *a, int *b) {
  *b = x % 10;
  while (x) {
    *a = x;
    x /= 10;
  }
}

int main(int argc, const char* argv[]) {
  int n, a, b, c, d;
  int count[10][10] = {0};
  int res = 0;
  cin >> n;

  for (int i = 1; i < n + 1; i++) {
    search(i, &a, &b);
    count[a][b]++;
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      res += count[i][j] * count[j][i];
    }
  }
  cout << res << endl;
  return 0;
}
