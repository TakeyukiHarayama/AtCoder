#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int sum = 0;

  cin >> N;
  vector<int> d(N);
  for(int i=0; i<N; i++){
    cin >> d[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      sum += d[i] * d[j];
    }
  }
  cout << sum << endl;

  return 0;
}
