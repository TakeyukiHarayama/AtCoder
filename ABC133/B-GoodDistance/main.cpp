#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

long long factorial(int n){
	long long sum = 1;

	for(int i=n; i>0; i--){
		sum *= i;
	}
	return sum;
}

long long binomial_coefficients(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(int argc, const char * argv[]) {
	int i, j;
	int N = 0;
	int D = 0;
	int count = 0;
	int distanceindex = 0;
	double *distance;

	scanf("%d %d", &N, &D);

	distance = (double *)calloc(binomial_coefficients(N, 2), sizeof(double));
	int X[N][D];

	for(i=0; i<N; i++){
		for(j=0; j<D; j++){
			cin >> X[i][j];
		} 
	} 

	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			for(int k=0; k<D; k++){
				distance[distanceindex] += pow(X[i][k] - X[j][k], 2);
			}
			distance[distanceindex] = sqrt(distance[distanceindex]);
			if (ceil(distance[distanceindex]) == floor(distance[distanceindex])){
				count++;
			}
			distanceindex++;
		}
	}

	printf("%d\n", count);

	return 0;
}
