#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  double sum = accumulate(A.begin(), A.end(), 0);
  double judge = sum / (4.0 * (double)M);
  sort(A.begin(), A.end(), greater<int>());
  for (int i = 0; i < M; i++) {
    if((double)A[i] < judge){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
