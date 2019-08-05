#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	int N = 0;
	int count = 0;
 
	cin >> N;
	vector<int> H(N);
	for(int i=0; i<N; i++){
		cin >> H[i];
	} 
 
	if(N == 1){
		cout << "Yes" << endl;
		return 0;
	}
 
	for(int i=N-1; i>1; i--){
		if(H[i - 1] > H[i]){
			H[i - 1]--;
			count++;
		}
	}
 
	if(count == 0){
		cout << "Yes" << endl;
		return 0;
	}
 
	count = 0;
	for(int i=N-1; i>1; i--){
		if(H[i - 1] > H[i]){ count++;}
	}
	if(count == 0){
		cout << "Yes" << endl;
		return 0;
	}
 
	cout << "No" << endl;
 
	return 0;
}
