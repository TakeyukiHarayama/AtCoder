#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	char A[100];

	cin >> A;

	if(strcmp(A, "Sunny") == 0){ cout << "Cloudy" << endl;};
	if(strcmp(A, "Cloudy") == 0){ cout << "Rainy" << endl;};
	if(strcmp(A, "Rainy") == 0){ cout << "Sunny" << endl;};

	return 0;
}
