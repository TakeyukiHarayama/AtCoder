#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, a;
  cin >> N;

  while(1){
    a = N % 10;
    N /= 10;
    if(a == 7){
      cout << "Yes" << endl;
      return 0;
    }
    if(N == 0){
      break;
    }
  }
  cout << "No" << endl;
  return 0;
}
