#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  long int N, K, t;
  cin >> N >> K;

  t = N % K;
  if(t > K - t){
    t = K - t;
  }
  cout << t << endl;

  return 0;
}
