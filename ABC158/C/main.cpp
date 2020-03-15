#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B;
  int a, b;
  cin >> A >> B;

  for(int i = 1; i < 1009; i++){
    a = i * 0.08;
    b = i * 0.1;
    if(a == A && b == B){
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}
