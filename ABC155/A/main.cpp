#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B, C;
  cin >> A >> B >> C;

  if(A == B){
    if (A != C) {
      cout << "Yes" << endl;
      return 0;
    }
  }else if(A == C){
    if (A != B) {
    cout << "Yes" << endl;
    return 0;
    }
  }else if(B == C){
    if (B != A) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
