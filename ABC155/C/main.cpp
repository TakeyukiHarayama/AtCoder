#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, b;
  int a = 0;
  cin >> N;
  vector<string> S(N);
  vector<string> O(N);
  vector<int> count(N);
  for(int i=0; i<N; i++){
    cin >> S[i];
    count[i] = 0;
  }

  sort(S.begin(), S.end());
  count[0]++;
  O[0] = S[0];
  for (int i = 1; i < N; i++) {
    if(S[i] != S[i-1]){
      a++;
      count[a]++;
      O[a] = S[i];
    } else {
      count[a]++;
    }
  }

  vector<int>::iterator iter = max_element(count.begin(), count.end());
  size_t index = distance(count.begin(), iter);
  cout << O[index] << endl;
  b = count[index];
  count[index] = 0;
  for (int i = 0; i < a + 1; i++) {
    if(count[i] == b){
      cout << O[i] << endl;
    }
  }

  return 0;
}

