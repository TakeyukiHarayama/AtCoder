#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B;
  cin >> A;
  cin >> B;

  if(A == 1){
    if (B == 2) {
      cout << "3" << endl;
    }else{
      cout << "2" << endl;
    }
  }
  if(A == 2){
    if (B == 1) {
      cout << "3" << endl;
    }else{
      cout << "1" << endl;
    }
  }
  if(A == 3){
    if (B == 1) {
      cout << "2" << endl;
    }else{
      cout << "1" << endl;
    }
  }
  return 0;
}
