#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, const char *argv[]) {
  int ans = 999;
  int tmp;
  char S[12];
  char a[2], b[2], c[2];
  scanf("%s", S);
  for (int i = 0; i < strlen(S) - 2; i++) {
    a[0] = S[i];
    b[0] = S[i+1];
    c[0] = S[i+2];
    tmp = abs(753 - (atoi(a) * 100 + atoi(b) * 10 + atoi(c)));
    ans = min(ans, tmp);
  }
  cout << ans << endl;

  return 0;
}
