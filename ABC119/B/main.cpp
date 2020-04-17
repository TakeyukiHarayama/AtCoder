#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  string S, R;
  string RSfront, RSend;
  cin >> S;
  R = S;
  string Sfront = S.substr(0, ((S.length() - 1) / 2));
  string Send = S.substr(((S.length() + 3) / 2) - 1, ((S.length() - 1) / 2));
  RSfront = Sfront;
  RSend = Send;
  reverse(R.begin(), R.end());
  reverse(RSfront.begin(), RSfront.end());
  reverse(RSend.begin(), RSend.end());

  if(S == R && Sfront == RSfront && Send == RSend){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
