#include <iostream>
 
using namespace std;
 
int main(int argc, const char *argv[]) {
  long long x, a, count;
  long long interest = 1;
  cin >> x;
  a = 100;
  count = 0;

  while(1){
    a += interest;
    interest = a / 100;
    count++;
    if(a >= x){
      break;
    }
  }
  cout << count << endl;

  return 0;
}