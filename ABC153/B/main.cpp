#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int H, N;

  cin >> H >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int sum = accumulate(A.begin(), A.end(), 0);
  if(sum < H){
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
