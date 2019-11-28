#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int N;
	int max = 0;

	cin >> N;
	long int H[N];
	long int count[N];

	for(int i=0; i<N; i++){
		cin >> H[i];
		count[i] = 0;
	}


	for(int j=0; j<N-1; j++){
		if((count[j-1] != 0) && (j > 0)){
			count[j] = count[j-1] - 1;
		}else{
			for(int i=j; i<N-1; i++){
				if(H[i] < H[i+1]){break;}
				else{ count[j]++;}
			}
			if(max < count[j]){
				max = count[j];
			}
		}
	}

	cout << max << endl;
	return 0;
}
