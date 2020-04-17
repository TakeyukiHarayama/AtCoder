#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int res = 0;
  cin >> N;
  vector<int> v(N);
  vector<int> c(N);
  vector<int> d(N);

  for(int i  = 0; i < N; i++){
    cin >> v[i];
  }
  for(int i  = 0; i < N; i++){
    cin >> c[i];
  }

  for(int i  = 0; i < N; i++){
    d[i] = v[i] - c[i];
    if(d[i] > 0){
      res += d[i];
    }
  }
  cout << res << endl;

  return 0;
}
