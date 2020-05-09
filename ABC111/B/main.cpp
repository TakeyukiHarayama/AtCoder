#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  long int ans = 0;
  cin >> N;

  for(int i = 1; i< N+1;i++){
    if (i % 3 != 0 && i % 5 != 0){
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}
