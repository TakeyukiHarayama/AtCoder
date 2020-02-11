#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]) {
  int N, K, M, a;
  int sum = 0;
  cin >> N >> K >> M;
  vector<int> A(N - 1);
  
  for(int i = 0; i<N-1; i++){
    cin >> A[i];
    sum += A[i];
  }

  a = N * M - sum;
  if(a > K){
    cout << "-1" << endl;
  } else if(a <= 0){
    cout << "0" << endl;
  } else {
    cout << a << endl;
  }

  return 0;
}
