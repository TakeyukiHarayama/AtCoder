#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  vector<int> dis(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 1; i < N; i++) {
    dis[i-1] = A[i] - A[i - 1];
  }
  dis[N - 1] = K - A[N - 1] + A[0];
  int sum = accumulate(dis.begin(), dis.end(), 0);
  vector<int>::iterator iter = max_element(dis.begin(), dis.end());
  size_t index = distance(dis.begin(), iter);
  cout << sum - dis[index] << endl;

  return 0;
}
