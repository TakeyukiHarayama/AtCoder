#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	char S[100];
	int Q, N;
	long int K;
 
	cin >> N >> K >> Q;
	int A[Q];
	int point[N];
 
	//intialize for point[]
	for(int i=0; i<N; i++){
		point[i] = 0;
	}
 
	//input and normarize
	for(int i=0; i<Q; i++){
		cin >> A[i];
		A[i]--;
	}
 
	for(int i=0; i<Q; i++){
		point[A[i]]++; 
	}
 
	for(int i=0; i<N; i++){
		if((K - (Q - point[i])) > 0){ cout << "Yes" << endl;}
		else{ cout << "No" << endl;}
	}
 
	return 0;
}