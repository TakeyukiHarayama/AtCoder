#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
 
using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int sum = 0;

  cin >> N;
  int A[N];
  int B[N - 1];
  for(int i=0; i<N-1;  i++){
    cin >> B[i];
    A[i] = 0;
  }
  A[N - 1] = 0;

  A[0] = B[0];
  for (int i = 0; i < N-1; i++) {
	if(A[i] > B[i]){
          A[i] = B[i];
	}
	A[i + 1] = B[i];
  }
  for (int i = 0; i < N; i++) {
    sum += A[i];
  }
  cout << sum << endl;

  return 0;
}