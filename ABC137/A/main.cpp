#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B;
  vector<int> max(3);
  cin >> A >> B;

  max[0] = A * B;
  max[1] = A + B;
  max[2] = A - B;

  vector<int>::iterator iter = max_element(max.begin(), max.end());
  size_t index = distance(max.begin(), iter);

  cout << max[index] << endl;
  return 0;
}
