#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int N, K;
	int count = 0;

	cin >> N >> K;
	int h[N];

	for(int i=0; i<N; i++){
		cin >> h[i];
		if(h[i] >= K){count++;}
	}
	cout << count << endl;

	return 0;
}
