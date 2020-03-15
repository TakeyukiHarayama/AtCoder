#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int A[3][3];
  int N, b;
  cin >> A[0][0] >> A[0][1] >> A[0][2];
  cin >> A[1][0] >> A[1][1] >> A[1][2];
  cin >> A[2][0] >> A[2][1] >> A[2][2];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> b;
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if(b == A[j][k]){
          A[j][k] = 0;
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    if(A[i][0] == 0 && A[i][1] == 0 && A[i][2] == 0){
      cout << "Yes" << endl;
      return 0;
    }
    if(A[0][i] == 0 && A[1][i] == 0 && A[2][i] == 0){
      cout << "Yes" << endl;
      return 0;
    }
  }
  if (A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) {
      cout << "Yes" << endl;
      return 0;
  }
  if (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0) {
      cout << "Yes" << endl;
      return 0;
  }
  cout << "No" << endl;
  return 0;
}
