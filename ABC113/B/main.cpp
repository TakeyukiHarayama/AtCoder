#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, T, A, in;
  double HT;
  cin >> N;
  cin >> T >> A;
  vector<double> H(N);

  for(int i = 0; i < N; i++){
    cin >> in;
    HT = (double)T - (double)in * 0.006;
    H[i] = fabs((double)A - HT);
  }
  vector<double>::iterator iter = min_element(H.begin(), H.end());
  size_t index = distance(H.begin(), iter);

  cout << index + 1 << endl;
  return 0;
}
