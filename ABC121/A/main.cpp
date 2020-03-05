#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int H, W, h, w;
  cin >> H >> W;
  cin >> h >> w;
  cout << (H - h) * (W - w) << endl;

  return 0;
}
