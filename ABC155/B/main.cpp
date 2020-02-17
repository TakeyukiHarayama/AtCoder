#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  int count = 0;
  cin >> N;
  vector<int> A(N);
  vector<int> E(N);

  for(int i = 0; i < N; i++){
    cin >> A[i];
    if((A[i] % 2) == 0){
      E[count] = A[i];
      count++;
    }
  }
  if(count == 0){
    cout << "APPROVED" << endl;
    return 0;
  }

  for (int i = 0; i < count; i++) {
    if ((E[i] % 3) == 0 || (E[i] % 5) == 0) {
    }else{
      cout << "DENIED" << endl;
      return 0;
    }
  }
  cout << "APPROVED" << endl;
  return 0;
}

