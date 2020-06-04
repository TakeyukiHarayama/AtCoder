#include <iostream>

using namespace std;

long int gcd(long int a, long int b) {
  if (a % b == 0) {
    return (b);
  } else {
    return (gcd(b, a % b));
  }
}

int main(int argc, const char *argv[]) {
  int K;
  long int res = 0;
  cin >> K;

  for (int a = 1; a <= K; a++) {
    for (int b = 1; b <= K; b++) {
      for (int c = 1; c <= K; c++) {
        res += gcd(gcd(a, b), c);
      }
    }
  }
  cout << res << endl;
  return 0;
}
