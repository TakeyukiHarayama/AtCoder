#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int n;
	int a, b, c;
	int count = 0;
	cin >> n;
	int p[n];

	for(int i=0; i<n; i++){
		cin >> p[i];
	}

	for(int i=1; i<n-1; i++){
		a = p[i-1];
		b = p[i];
		c = p[i+1];
		if(a > b && b > c){
			count++;
		}
		if(a < b && b < c){
			count++;
		}
	}
	cout << count << endl;

	return 0;
}
