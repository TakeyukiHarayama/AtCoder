#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[]) {
  long long int a, b, c, d;
  cin >> a >> b >> c;

  d = c - a - b;
  if(d > 0 && 4 * a * b < d * d){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
