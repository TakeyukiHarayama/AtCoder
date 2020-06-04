#include <iostream>
#include <cstring>
 
using namespace std;
 
int main(void) {
  int k, length;
  cin >> k;
  char s[101];
  scanf("%s", s);
  length = strlen(s);

  if(length > k){
    for(int i = 0; i<k; i++){
      printf("%c", s[i]);
    }
    cout << "..." << endl;
  } else {
    cout << s << endl;
  }

  return 0;
}