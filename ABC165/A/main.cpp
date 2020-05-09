#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int K, A, B;
  cin >> K >> A >> B;

  for(int i = A; i < B+1; i++){
    if(i % K == 0){
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  return 0;
}
