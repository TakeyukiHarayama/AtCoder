#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	int N, D;
	int zone;
	int ans;
 
	cin >> N >> D;
	zone = (2 * D) + 1;
	ans = N / zone;
	if(N % zone != 0){ ans++;}

	cout << ans << endl;
 
	return 0;
}
