#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  long int N, A, B;
  long int blue = 0;
  cin >> N >> A >> B;

  if(A == 0){
    cout << 0 << endl;
    return 0;
  }
  blue = (N / (A + B)) * A;
  if(N % (A + B) <= A){
    blue += (N % (A + B));
  }else{
    blue += A;
  }
  cout << blue << endl;

  return 0;
}
