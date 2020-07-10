#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
  int N;
  cin >> N;
  string s;
  map<string, int> S;

  for(int i = 0; i < N; i++){
    cin >> s;
    S[s]++;
  }
  printf("AC x %d\n", S["AC"]);
  printf("WA x %d\n", S["WA"]);
  printf("TLE x %d\n", S["TLE"]);
  printf("RE x %d\n", S["RE"]);
  return 0;
}