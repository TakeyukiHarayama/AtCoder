#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  string S, T;
  cin >> S >> T;

  T.pop_back();
  if(S == T){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
