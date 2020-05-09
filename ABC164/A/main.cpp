#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int S, W;
  cin >> S >> W;

  S <= W ? cout << "unsafe" << endl : cout << "safe" << endl;
  return 0;
}
