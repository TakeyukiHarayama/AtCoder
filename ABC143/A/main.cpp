#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int A, B;
	int C;

	cin >> A >> B;
	C = A - B * 2;

	if(C <= 0){
		cout << 0 << endl;
	}else{
		cout << abs(C * (-1)) << endl;
	}

	return 0;
}
