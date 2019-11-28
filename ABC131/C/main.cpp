#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <queue>

using namespace std;

long int  Euclidean_Algorithm(long int m, long int n);

int main(int argc, const char * argv[]) {
	long int A, B, C, D;
	long int tmp, count, n, m, l, sum;

	cin >> A >> B >> C >> D;

	count = B;
	count -= (B / C) + (B / D); 
	l = (C * D) / Euclidean_Algorithm(C, D);
	count  += B / l;

	sum = count;

	count = A - 1;
	count -= ((A-1) / C) + ((A-1) / D); 
	l = (C * D) / Euclidean_Algorithm(C, D);
	count  += A / l;

	sum -= count;
	cout << sum << endl;

	return 0;
}

long int  Euclidean_Algorithm(long int m, long int n){
	long int tmp;

	if(n > m){
		tmp = m;
		m = n;
		n = tmp;
	}
	while(1){
		tmp = n;
		n = m % n;
		m = tmp;
		if(n == 0){break;}
	}
	return m;
}
