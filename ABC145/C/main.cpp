#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int count = 0;
  long double sum = 0.0;
  int disx, disy;

  cin >> N;
  vector<int> v(N);
  int x[N], y[N];

  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    v[i] = i + 1;
  }

  do {
    for (int i = 0; i < N-1; i++) {
      disx = (x[v[i]-1] - x[v[i+1]-1]);
      disy = (y[v[i]-1] - y[v[i+1]-1]);
      sum += sqrtl(disx * disx + disy * disy);
    }
    count++;
  } while (std::next_permutation(v.begin(), v.end()));

  printf("%.10Lf\n", sum / count);
  return 0;
}
