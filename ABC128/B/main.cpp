#include <iostream>
#include <string>
#include <vector>

using namespace std;
pair<pair<string, int>, int> P[110];

int main() {
  int N, tmp;
  string S;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> S >> tmp;
    P[i] = make_pair(make_pair(S, -tmp), i);
  }
  sort(P, P + N);
  for (int i = 0; i < N; i++){
    printf("%d\n", P[i].second + 1);
  }
  return 0;
}