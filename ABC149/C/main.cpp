#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int num) {
  if (num < 2){
    return false;
  }else if (num == 2){
    return true;
  }else if (num % 2 == 0){
    return false;
  }
  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main(int argc, const char *argv[]) {
  int x;
  cin >> x;

  while(1){
    if(IsPrime(x)){
      cout << x << endl;
      break;
    }
    x++;
  }
  return 0;
}
