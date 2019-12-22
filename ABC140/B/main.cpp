#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
  int N;
  int sum = 0;

  cin >> N;
  int A[N];
  int B[N];
  int C[N];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  for (int i = 0; i < N-1; i++) {
    cin >> C[i];
  }

  for (int i = 0; i < N; i++) {
    sum += B[A[i]-1];
    if (i > 0 && ((A[i] - 1) == A[i - 1])) {
      sum += C[A[i-1]-1];
    }
  }

  cout << sum << endl;
  return 0;
}
