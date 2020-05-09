#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void) {
  int N, K, A;
  cin >> N >> K;
  vector<int> d(K);
  vector<bool> has(N, false);

  for(int i = 0; i< K; i++){
    cin >> d[i];
    for (int j = 0; j < d[i]; j++) {
      cin >> A;
      has[A - 1] = true;
    }
  }

  int res = 0;
  for (int i = 0; i < has.size(); i++) {
    if(has[i] == false){
      res++;
    }
  }
  cout << res << endl;

  return 0;
}