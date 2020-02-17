#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int count = 0;
  string S;
  string a = "ABC";

  cin >> N;
  cin >> S;

  for (int i = 0; i < N - 2; i++) {
    if (S.compare(i, 3, a) == 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
