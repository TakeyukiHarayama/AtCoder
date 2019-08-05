#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	int A, B, C;
	int ans;

	cin >> A;
	cin >> B;
	cin >> C;

	ans = C - (A - B);
	if(ans < 0){ ans = 0;}

	cout << ans <<endl;

	return 0;
}
