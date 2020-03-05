#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B;
  int C = 0;
  cin >> A >> B;

  if(A > B){
    cout << A + A - 1 << endl;
  }else if(A < B){
    cout << B + B - 1 << endl;
  }else{
    cout << A + B << endl;
  }

  return 0;
}
