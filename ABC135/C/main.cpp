#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
  int N;
  cin >> N;
  vector<long int> A(N + 1);
  vector<long int> B(N + 1, 0);
  vector<long int> C(N + 1);

  for(int i = 0; i<N+1; i++){
    cin >> A[i];
  }
  for(int i = 0; i<N; i++){
    cin >> B[i];
  }
  long int Asum = accumulate(A.begin(), A.end(), 0L);

  C[0] = A[0] - B[0];
  for (int i = 1; i < N + 1; i++) {
    if (C[i - 1] < 0) {
      (A[i] + C[i - 1]) < 0 ? A[i] = 0 : A[i] += C[i - 1];
      C[i - 1] = 0;
    }
    C[i] = A[i] - B[i];
  }
  if(C[N] < 0){
    C[N] = 0;
  }

  long int Csum = accumulate(C.begin(), C.end(), 0L);

  cout << Asum - Csum << endl;

  return 0;
}
