#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  cin >> N;
  string s;
  map<string, int> S;
  for (int i = 0; i < N; i++) {
    cin >> s;
    S[s]++;
  }
  cout << S.size() << endl;
  return 0;
}
