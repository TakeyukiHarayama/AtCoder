#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    int n = 0;
    int x = 0;
    int count = 0;
    int *L, *point;
    
    scanf("%d %d", &n, &x);
    L = (int *)calloc(n, sizeof(int));
    point = (int *)calloc(n+1, sizeof(int));
    
    for(i=0; i<n; i++){
        scanf("%d",&L[i]);
    }

    point[1] = L[0];
    
    for(i=2; i<n+1; i++){
        point[i] = point[i-1] + L[i-1];
    }
    for(i=0; i<n+1; i++){
        if(point[i] <= x){count++;}
    }
    printf("%d\n", count);
    
    return 0;
}

