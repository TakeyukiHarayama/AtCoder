#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int K, X;

  cin >> K >> X;

  if((500 * K) < X){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
  return 0;
}
