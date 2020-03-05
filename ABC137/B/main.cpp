#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int K, X;
  cin >> K >> X;

  for(int i = X - (K - 1); i < X + K; i++){
    printf("%d ", i);
  }
  putchar('\n');
  return 0;
}
