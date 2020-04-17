#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int counter(int bit) {
  if(bit == 0){
    return 0;
  }else{
    return (bit & 1) + counter(bit >> 1);
  }
}

int main(int argc, const char *argv[]) {
  int N;
  int ans = 0;
  cin >> N;
  vector<int> A(N);
  vector<vector<int> > x(N, vector<int>(N));
  vector<vector<int> > y(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    for (int j = 0; j < A[i]; j++) {
      cin >> x[i][j] >> y[i][j];
      x[i][j]--;
    }
  }

  for (int bit = 0; bit < (1 << N); bit++) {
    bool status = true;
    for (int i = 0; i < N; i++) {
       if(!(bit & (1 << i))) continue;
      for (int j = 0; j < A[i]; j++) {
        if (((bit >> (x[i][j])) & 1) ^ y[i][j]){
          status = false;
        }
      }
    }
    if(status){
      ans = max(ans, counter(bit));
    }
  }
  cout << ans << endl;
  return 0;
}
