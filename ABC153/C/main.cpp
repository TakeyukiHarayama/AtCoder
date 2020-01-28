#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, K;

  cin >> N >> K;
  vector<long int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  if(N <= K){
    cout << "0" << endl;
    return 0;
  }

  long int sum = accumulate(A.begin(), A.end(), 0LL);
  sort(A.begin(),A.end(),std::greater<int>());
  for (int i = 0; i < K; i++) {
    sum -= A[i];
    A[i] = 0;
  }
  cout << sum << endl;
  return 0;
}
