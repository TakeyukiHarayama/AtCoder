#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <queue>

using namespace std;

int gcd(int a, int b) {
  int t;
  while ( b != 0 ) {
    t = a%b; a = b; b = t;
  }
  return a;
}

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, const char * argv[]) {
	int count = 0;
	long long int A, B;
	vector<int> comdiv;

	cin >> A >> B;

	for(int i=1; i<(A/2)+1; i++){
		if(((A % i) == 0) && ((B % i) == 0)){
			comdiv.push_back(i);
		}
	}
	for(int i=0; i<comdiv.size(); i++){
		if(IsPrime(comdiv[i])){count++;}
	}

	cout << count+1 << endl;
	return 0;
}

