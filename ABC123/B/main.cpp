#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char *argv[]) {
  int sum = 0;
  vector<int> t(5);
  vector<int> diff(5);
  for(int i = 0; i<5; i++){
    cin >> t[i];
  }

  for(int i = 0; i<5; i++){
    t[i] % 10 == 0 ? diff[i] = 0 : diff[i] = 10 - (t[i] % 10);
    sum += t[i] + diff[i];
  }
  vector<int>::iterator iter = max_element(diff.begin(), diff.end());
  size_t index = distance(diff.begin(), iter);

  cout << sum - diff[index] << endl;
  return 0;
}
