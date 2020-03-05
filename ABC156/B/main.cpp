#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, K;
  int i = 0;
  cin >> N >> K;

  while(1){
    N /= K;
    i++;
    if (N == 0) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}

