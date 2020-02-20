#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  string S;
  cin >> S;

  if(S.compare("SUN")==0){
    cout << "7" << endl;
  }else if(S.compare("MON")==0){
    cout << "6" << endl;
  }else if(S.compare("TUE")==0){
    cout << "5" << endl;
  }else if(S.compare("WED")==0){
    cout << "4" << endl;
  }else if(S.compare("THU")==0){
    cout << "3" << endl;
  }else if(S.compare("FRI")==0){
    cout << "2" << endl;
  }else if(S.compare("SAT")==0){
    cout << "1" << endl;
  }

  return 0;
}
