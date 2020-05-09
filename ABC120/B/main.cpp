#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B, K;
  int count = 0;
  vector<int> G;
  cin >> A >> B >> K;

  for (int i = 1; i <= 100; i++) {
    if (A % i == 0 && B % i == 0) {
      G.insert(G.begin(),i);
    }
  }
  cout << G[K-1] << endl;

  return 0;
}
