#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
  string b;
  cin >> b;

  if(b.compare("A") == 0){
    cout << "T" << endl;
  }
  if(b.compare("T") == 0){
    cout << "A" << endl;
  }
  if(b.compare("C") == 0){
    cout << "G" << endl;
  }
  if(b.compare("G") == 0){
    cout << "C" << endl;
  }
  return 0;
}
