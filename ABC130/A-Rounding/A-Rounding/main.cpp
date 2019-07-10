#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x = 0;
    int a = 0;

    scanf("%d %d", &x, &a);
    
    if(x < a){printf("0\n");}
    if(x >= a){printf("10\n");}
    
    return 0;
}
