#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int i, j, k;
	int A = 0;
	int B = 0;
	int K = 0;

	scanf("%d %d", &A, &B);

	if(A > B){ k=A;}
	else{ k=B;}

	for(i=0; i<k; i++){
		if(abs(A-i) == abs(B-i)){
			cout<< i << endl;
			return 0;
		}
	}

	cout<< "IMPOSSIBLE" << endl;

	return 0;
}
