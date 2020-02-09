#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]) {
  int a, b, c;

  cin >> a >> b;

  if(a < b){
    c = a;
    for (int i = 0; i < b-1; i++) {
      c = c * 10;
      c += a;
    }
    cout << c << endl;
  }else if(a > b){
    c = b;
    for (int i = 0; i < a-1; i++) {
      c = c * 10;
      c += b;
    }
    cout << c << endl;
  }else{
    c = b;
    for (int i = 0; i < a-1; i++) {
      c = c * 10;
      c += b;
    }
    cout << c << endl;
  }
  return 0;
}
