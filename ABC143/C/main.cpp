#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int count = 1;
  cin >> N;
  string S;
  cin >> S;

  for(int i = 0; i < N-1; i++){
    if (S[i] != S[i + 1]) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
