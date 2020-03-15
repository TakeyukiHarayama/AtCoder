#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  long long int H, W, res;
  cin >> H >> W;

  if(H == 1 || W == 1) {
    cout << 1 << endl;
    return 0;
  }
  cout << (H * W + 1) / 2 << endl;
  return 0;
}

