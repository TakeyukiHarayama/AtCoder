#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
	int N, L;
	int min, min_index;
	int tmpabs;
	int sum;

	cin >> N >> L;
	int taste[N];

	taste[0] = L;
	min = abs(L);
	min_index = 0;
	sum = L;
	for(int i=1; i<N; i++){
		taste[i] = L + i;
		sum += taste[i];
		tmpabs = abs(taste[i]);
		if(min > tmpabs){
			min = tmpabs;
			min_index = i;
		}
	}
	cout << sum-taste[min_index] << endl; 
	return 0;
}

