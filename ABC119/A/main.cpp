#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  int Y, M, D;
  char c1, c2;
  cin >> Y >> c1 >> M >> c2 >> D;

  if(M > 4){
    cout << "TBD" << endl;
  }else{
    cout << "Heisei" << endl;
  }
  return 0;
}
