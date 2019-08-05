#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int N = 0;
	int max = 0;
	int min = 0;
	int count = 0;

	cin >> N;
	vector<int> p(N);
	for(int i=0; i<N; i++){
		cin >> p[i];
	} 

	for(int i=0; i<N; i++){
		if(p[i] != (i+1)){ count++;}
	}
	
	if(count < 3){ cout << "YES" << endl;}
	else{ cout << "NO" << endl;}

	return 0;
}
