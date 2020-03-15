#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  unsigned long int A, B, K;
  cin >> A >> B >> K;

  if(A < K){
    K -= A;
    A = 0;
    if(B < K){
      printf("0 0\n");
    }else{
      B -= K;
      printf("%ld %ld\n", A, B);
    }
  } else {
    printf("%ld %ld\n", A - K, B);
  }
  return 0;
}
