#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int total(int a){
  int sum = 0;
  for (int i = 1; i <= a; i++) {
    sum += i;
  }
  return sum;
}

int main(int argc, const char* argv[]) {
  int N, K;
  double result = 0.0;
  cin >> N >> K;
  vector<int> P(N);
  vector<int> sum(N-K+1);
  for(int i=0; i< N;i++){
    cin >> P[i];
  }
  for (int i = 0; i <= N-K; i++) {
    sum[i] = accumulate(P.begin()+i, P.begin()+(K+i), 0);
  }
  vector<int>::iterator iter = max_element(sum.begin(), sum.end());
  size_t index = distance(sum.begin(), iter);
  for (int i = 0; i < K; i++) {
    result = result + (double)total(P[index + i]) / (double)P[index + i];
  }
  printf("%f\n", result);

  return 0;
}
