#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int count = 0;
	int N;

	cin >> N;

	for(int i=1; i<N+1; i++){
		if((i%2) == 1){
			count++;
		}
	}
	printf("%.10f\n", (double)count / (double)N);

	return 0;
}
