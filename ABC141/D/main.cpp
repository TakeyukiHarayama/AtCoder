#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <queue>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	int N, M;
	long int sum = 0;
	long int tmp;
 
	cin >> N >> M;
	priority_queue<long int> A;
 
	for(int i=0; i<N; i++){
		cin >> tmp;
		A.push(tmp);
	}
 
	for(int i=0; i<M; i++){
		A.push(A.top() / 2);
		A.pop();
	}
 
	while (!A.empty()) {
		sum += A.top();
		A.pop();
	}
	cout << sum << endl;
 
	return 0;
}