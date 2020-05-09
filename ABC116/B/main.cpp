#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int S, a, b;
  int index = 1;
  vector<int> flag(1000001, false);
  cin >> S;

  a = S;
  flag[a] = true;
  while (1) {
    index++;
    if (a % 2 == 0) {
      b = a / 2;
    } else {
      b = 3 * a + 1;
    }
    if(flag[b] == true){
      cout << index << endl;
      break;
    } else {
      flag[b] = true;
    }
    a = b;
  }

  return 0;
}
