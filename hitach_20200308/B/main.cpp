#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A);
  vector<int> b(A);
  vector<int> x(M);
  vector<int> y(M);
  vector<int> c(M);

  for(int i = 0; i < A; i++){
    cin >> a[i];
  }
  for(int i = 0; i < B; i++){
    cin >> b[i];
  }
  for(int i = 0; i < M; i++){
    cin >> x[i] >> y[i] >> c[i];
  }

  vector<int>::iterator iter = min_element(a.begin(), a.end());
  size_t amin = distance(a.begin(), iter);
  iter = min_element(b.begin(), b.end());
  size_t bmin = distance(b.begin(), iter);

  vector<int> pmin;
  pmin.push_back(a[amin] + b[bmin]);

  for(int i = 0; i < M; i++){
    pmin.push_back(a[x[i] - 1] + b[y[i] - 1] - c[i]);
  }

  iter = min_element(pmin.begin(), pmin.end());
  size_t index = distance(pmin.begin(), iter);
  cout << pmin[index] << endl;

  return 0;
}

