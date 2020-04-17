#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, M, C;
  int tmp = 0;
  int count = 0;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int> > A(N, vector<int>(M));
  for(int i = 0; i<M; i++){
    cin >> B[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      tmp += A[i][j] * B[j];
    }
    tmp += C;
    if(tmp > 0){
      count++;
    }
    tmp = 0;
  }
  cout << count << endl;
  return 0;
}
