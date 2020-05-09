#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  cin >> N;
  vector<int> A(N - 1);
  vector<int> count(N, 0);

  for (int i = 0; i < N - 1; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N - 1; i++) {
    count[A[i] - 1]++;
  }
  for (int i = 0; i < N; i++) {
    cout << count[i] << endl;
  }

  return 0;
}
