#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	int N;
	int count = 0;
 
	cin >> N;
 
	for(int i=1; i<=N; i++){
		if(i > 0 && i < 10){
			count++;
		}
		if(i > 99 && i < 1000){
			count++;
		}
		if(i > 9999 && i < 100000){
			count++;
		}
	} 
	cout << count << endl;
 
	return 0;
}