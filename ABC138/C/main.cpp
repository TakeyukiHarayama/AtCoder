#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  long int comp;

  cin >> N;
  vector<long int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  comp = A[0];
  for (int i = 1; i < N; i++) {
    if(A[i] ==  comp){
      cout << "NO" << endl;
      return 0;
    }
    comp = A[i];
  }

  cout << "YES" << endl;

  return 0;
}
