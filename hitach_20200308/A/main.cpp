#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  string s;
  cin >> s;
  if(s.compare("hi") == 0){
    cout << "Yes" << endl;
    return 0;
  }
  if(s.compare("hihi") == 0){
    cout << "Yes" << endl;
    return 0;
  }
  if(s.compare("hihihi") == 0){
    cout << "Yes" << endl;
    return 0;
  }
  if(s.compare("hihihihi") == 0){
    cout << "Yes" << endl;
    return 0;
  }
  if(s.compare("hihihihihi") == 0){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
