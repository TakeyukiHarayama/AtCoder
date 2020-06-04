#include <iostream>

using namespace std;

int main(void) {
  int N, a;
  cin >> N;

  a = N % 10;
  if (a == 2 || a == 4 || a == 5 || a == 7 || a == 9) {
    cout << "hon" << endl;
  }else if(a == 0 || a == 1 || a == 6 || a == 8){
    cout << "pon" << endl;
  }else{
    cout << "bon" << endl;
  }
  return 0;
}