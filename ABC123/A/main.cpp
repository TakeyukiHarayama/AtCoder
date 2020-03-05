#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
  int k;
  vector<int> dis;
  vector<int> point(5);
  cin >> point[0] >> point[1] >> point[2] >> point[3] >> point[4] >> k;

  for(int i = 0; i < 5; i++){
    for (int j = i+1; j < 5; j++) {
      dis.push_back(abs(point[i] - point[j]));
    }
  }
  vector<int>::iterator iter = max_element(dis.begin(), dis.end());
  size_t index = distance(dis.begin(), iter);
  if(dis[index] > k){
    cout << ":(" << endl;
  }else{
    cout << "Yay!" << endl;
  }
  return 0;
}
