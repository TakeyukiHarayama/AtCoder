#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int a;
  string s;

  cin >> a;
  cin >> s;

  if(a >= 3200){
    cout << s << endl;
  }else{
    cout << "red" << endl;
  }
  return 0;
}
