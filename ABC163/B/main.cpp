#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
int main(int argc, const char *argv[]) {
  int N, M;
  long sum = 0;
  cin >> N >> M;
  vector<int> A(M);
 
  for (int i = 0; i < M; i++) {
    cin >> A[i];
    sum += A[i];
  }
 
  if(N < sum){
    cout << "-1" << endl;
  }else{
    cout << N - sum << endl;
  }
 
  return 0;
}