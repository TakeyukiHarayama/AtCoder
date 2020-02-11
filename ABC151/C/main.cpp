#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
  int N, M;
  int ACcount = 0;
  int WAcount = 0;
  cin >> N >> M;
  vector<int> p(M);
  vector<int> WAC(M);
  vector<int> status(M);
  string S;

  for (int i = 0; i < M; i++) {
    cin >> p[i] >> S;
    if(S.compare("AC") == 0){
      WAC[i] = 1;
    }else{
      WAC[i] = 0;
    }
    status[i] = 0;
  }

  if (M == 0) {
    printf("0 0\n");
    return 0;
  }

  for (int i = 0; i < M; i++) {
    if (WAC[i] == 0 && status[p[i]-1] == 0) {
      WAcount++;
    }
    if (WAC[i] == 1 && status[p[i]-1] == 0) {
      ACcount++;
      status[p[i]-1] = 1;
    }
  }

  printf("%d %d\n", ACcount, WAcount);
  return 0;
}
