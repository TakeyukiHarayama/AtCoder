#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  cin >> N;
  string S;
  map<string, long long> A;
  long int ans = 0;

  for (int i = 0; i < N; i++) {
    cin >> S;
    sort(S.begin(), S.end());
    A[S]++;
  }

  for(auto x : A){
    ans += (x.second * (x.second - 1)) / 2;
  }
  cout << ans << endl;

  return 0;
}
