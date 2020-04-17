#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int count = 0;
  int max = 0;
  string S;
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    for (int j = i; i < S.length(); j++) {
      if (S[j] == 'A' || S[j] == 'C' || S[j] == 'G' || S[j] == 'T') {
        count++;
      } else {
        break;
      }
    }
    if(count > max){
      max = count;
    }
    count = 0;
  }
  cout << max << endl;

  return 0;
}
