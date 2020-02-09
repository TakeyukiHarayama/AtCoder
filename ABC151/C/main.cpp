#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]) {
  int N, count, min;
  cin >> N;
  vector<int> p(N);

  for (int i = 0; i < N; i++) {
    cin >> p[i];
  }

  count = 1;
  min = p[0];
  for (int i = 1; i < N; i++) {
    if(min > p[i]){
      count++;
      min = p[i];
    }
  }
  cout << count << endl;

  return 0;
}
