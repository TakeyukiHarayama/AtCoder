#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int A, B;
	int count = 1;
	int sum = 0;

	cin >> A;
	cin >> B;

	if(B == 1){
		cout << 0 << endl;
		return 0;
	}
	if(A >= B){
		cout << 1 << endl;
		return 0;
	}

	sum = A;
	while(1){
		sum += (A - 1);
		count++;
		if(sum >= B){ break;}
	}

	cout<< count << endl;

	return 0;
}
