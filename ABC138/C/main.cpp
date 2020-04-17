#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  double res = 0;
  cin >> N;
  vector<long int> V(N);
  for (int i = 0; i < N; i++) {
    cin >> V[i];
  }

  sort(V.begin(), V.end());
  res = (V[0] + V[1]) / 2.0;
  for (int i = 2; i < N; i++) {
    res = (res + V[i]) / 2.0;
  }
  printf("%f\n", res);
  return 0;
}
