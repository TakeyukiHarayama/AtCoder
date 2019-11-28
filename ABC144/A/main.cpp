#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int A , B;

	cin >> A >> B;;

	if(A > 9 || B > 9){
		cout << "-1" << endl;
	}else{
		cout << A * B << endl;
	}

	return 0;
}
