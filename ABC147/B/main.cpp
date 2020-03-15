#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int count = 0;
  string S;
  cin >> S;
  for (int i = 0; i < S.length() / 2; i++) {
    if (S[i] != S[S.length() - (1 + i)]) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
