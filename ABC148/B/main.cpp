#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  string s, t;
  cin >> N;
  cin >> s >> t;

  for(int i =0; i<N; i++){
    cout << s[i] << t[i];
  }
  putchar('\n');
  return 0;
}
