#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, K;
  char s[51];
  cin >> N >> K;
  scanf("%s", s);
  s[K-1] += 32;
  printf("%s\n", s);

  return 0;
}
