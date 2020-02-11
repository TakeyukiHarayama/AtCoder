#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  double sum = 0.0;
  cin >> N;
  vector<int> A(N);

  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  for(int i=0;i<N;i++){
    sum += 1.0 / (double)A[i];
  }
  printf("%f\n", 1.0 / (double)sum);

  return 0;
}
