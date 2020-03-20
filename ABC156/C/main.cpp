#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, tmp;
  vector<int> dis(100);
  cin >> N;
  vector<int> X(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i];
  }

  for (int i = 0; i < 100; i++) {
    dis[i] = 0;
    for (int j = 0; j < N; j++) {
      tmp = X[j] - i + 1;
      dis[i] += tmp * tmp;
    }
  }
  vector<int>::iterator iter = min_element(dis.begin(), dis.end());
  size_t index = distance(dis.begin(), iter);

  cout << dis[index] << endl;
  return 0;
}
