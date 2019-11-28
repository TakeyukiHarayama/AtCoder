#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	char S[100];

	cin >> S;

	//Odd number
	for(int i=0; i<strlen(S); i+=2){
		if(S[i] == 'R' || S[i] == 'U' || S[i] == 'D'){
		}else{
			cout << "No" << endl;
			return 0;
		}
	}

	//Even number
	for(int i=1; i<strlen(S); i+=2){
		if(S[i] == 'L' || S[i] == 'U' || S[i] == 'D'){
		}else{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;


	return 0;
}
