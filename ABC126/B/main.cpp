#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int S;
  bool ymflag = true;
  bool myflag = true;
  vector<int> a(4);
  cin >> S;

  a[0] = S / 1000;
  a[1] = (S - a[0] * 1000) / 100;
  a[2] = (S - a[0] * 1000 - a[1] * 100) / 10;
  a[3] = S % 10;

  if ((a[0] * 10 + a[1]) > 12) {
    myflag = false;
  }
  if((a[0] * 10 + a[1]) == 0){
    myflag = false;
  }
  if((a[2] * 10 + a[3]) > 12){
    ymflag = false;
  }
  if((a[2] * 10 + a[3]) == 0){
    ymflag = false;
  }

  if(myflag == true && ymflag == true){
    cout << "AMBIGUOUS" << endl;
  }else if(myflag){
    cout << "MMYY" << endl;
  }else if(ymflag){
    cout << "YYMM" << endl;
  }else{
    cout << "NA" << endl;
  }

  return 0;
}
