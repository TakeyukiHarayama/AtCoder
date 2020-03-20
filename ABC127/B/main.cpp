#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  long int r, D, x2000;
  long int tmp;
  cin >> r >> D >> x2000;

  tmp = r * x2000 - D;
  cout << tmp << endl;
  for(int i = 1; i < 10; i++){
    tmp = r * tmp - D;
    cout << tmp << endl;
  }
  return 0;
}
