#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, M;
  int res = 0;
  cin >> N >> M;
  for(int i = 1; i < N; i++){
    res += i;
  }
  for(int i = 1; i < M; i++){
    res += i;
  }
  cout << res << endl;
  return 0;
}
