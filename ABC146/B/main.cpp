#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  string S;
  cin >> N;
  cin >> S;

  for(int i = 0; i < S.length(); i++){
    S[i] += N;
    if(S[i] > 90){
      S[i] = S[i] % 91 + 65;
    }
  }
  cout << S << endl;
  return 0;
}
