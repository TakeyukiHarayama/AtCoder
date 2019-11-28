#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <iterator>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	int N = 0;
	int max1, max2;

	cin >> N;
	vector<int> A(N);
	for(int i=0; i<N; i++){
		cin >> A[i];
	} 
	max1 = *max_element(A.begin(), A.end());
	size_t maxIndex = std::distance(A.begin(), max1);
	cout << A[maxIndex] << endl;
	


 
	return 0;
}
