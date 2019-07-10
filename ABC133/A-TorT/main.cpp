#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    int N = 0;
    int A = 0;
    int B = 0;
    
    scanf("%d %d %d", &N, &A, &B);
    
	if((N * A) < B){printf("%d\n", N * A);}
	else if((N * A) >= B){printf("%d\n", B);}
    
    return 0;
}

