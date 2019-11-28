#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]) {
  int N;
  string S, T;

  cin >> N >> S;

  if((N % 2) == 1){
	  cout << "No" << endl;
          return 0;
  }
  T = S.substr(0, N / 2);
  if(S == (T + T)){
	  cout << "Yes" << endl;
  }else{
	  cout << "No" << endl;
  }

  return 0;
}
