#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	char A[4], B[4];
	int count = 0;

	cin >> A;
	cin >> B;

	if(A[0] == B[0]){ count++;}
	if(A[1] == B[1]){ count++;}
	if(A[2] == B[2]){ count++;}

	cout << count << endl;

	return 0;
}
