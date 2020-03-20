#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, M, s, c;
  cin >> N >> M;
  pair<int, int> sc[5];
  for(int i = 0; i < M; i++){
    cin >> s >> c;
    sc[i] = make_pair(s, c);
  }
  sort(sc, sc+M);

  if(N > 1){
    for (int i = 0; i < M; i++) {
      if(sc[i].first == 1 && sc[i].second == 0){
        cout << "-1" << endl;
        return 0;
      }
    }
  }
  for(int i = 1; i < M; i++){
    if(sc[i-1].first == sc[i].first && sc[i-1].second != sc[i].second){
      cout << "-1" << endl;
      return 0;
    }
  }

  bool flag = true;
  int a[3];
  for (int i = (N == 0 ? 0 : pow(10, N - 1)); i < pow(10, N); i++) {
    flag = true;
    a[0] = i / 100;
    a[1] = (i - a[0] * 100) / 10;
    a[2] = i % 10;
    for (int j = 0; j < M; j++) {
      if (a[sc[j].first - 1] != sc[j].second) {
        flag = false;
        break;
      }
    }
    if(flag){
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;

  return 0;
}
