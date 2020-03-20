#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int N;
  vector<int> pattern;
  int Pindex, Qindex, index;
  cin >> N;
  vector<int> P(N), Q(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
    pattern.push_back(i+1);
  }
  for (int i = 0; i < N; i++) {
    cin >> Q[i];
  }

  index = 1;
  do {
    if(P == pattern){
      Pindex = index;
    }
    if(Q == pattern){
      Qindex = index;
    }
    index++;
  } while (std::next_permutation(pattern.begin(), pattern.end()));

  cout << abs(Pindex - Qindex) << endl;
  return 0;
}
