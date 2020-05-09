#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int N, sum;
  cin >> N;
  vector<int> L(N);

  for(int i = 0; i < N; i++){
    cin >> L[i];
  }

  vector<int>::iterator iter = max_element(L.begin(), L.end());
  size_t index = distance(L.begin(), iter);
  sum = accumulate(L.begin(), L.end(), 0);
  if (L[index] < sum - L[index]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
