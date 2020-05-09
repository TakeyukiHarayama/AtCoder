#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N = 0;
  int index = 0;

  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  B = A;
  sort(B.begin(), B.end(), greater<int>());
  for (int i = 0; i < N; i++) {
    if (A[i] == B[index]) {
      cout << B[index + 1] << endl;
    }else{
      cout << B[index] << endl;
	}
  }
  return 0;
}
