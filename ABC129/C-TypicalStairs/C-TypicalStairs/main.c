#include <stdio.h>
#include <stdlib.h>

int patternNum = 0;

long long int SearchCase(int CurrentStair, int NextStair, int *aM, int *pattern1, int *pattern2, int N, int M);

int main(int argc, const char * argv[]) {
    int N, M;
    int i;
    int *aM, *pattern1, *pattern2;
    long long int CaseNum = 0;
    
    scanf("%d",&N);
    scanf("%d",&M);
    aM = (int *)malloc(M * sizeof(int));
    pattern1 = (int *)calloc(N, sizeof(int));
    pattern2 = (long long int *)calloc(N, sizeof(long long int));
    
    for(i=0; i<M; i++){
        scanf("%d",&aM[i]);
    }
    
    CaseNum = SearchCase(0, 1, aM, pattern1, pattern2, N, M);
    if (N > 1) {
        CaseNum += SearchCase(0, 2, aM, pattern1, pattern2, N, M);
    }
    
    printf("%d\n", CaseNum  % 1000000007);
    
    free(aM);
    free(pattern1);
    free(pattern2);
    return 0;
}

long long int SearchCase(int CurrentStair, int NextStair, int *aM, int *pattern1, int *pattern2, int N, int M){
    long long int CaseNum = 0;
    int i;
    
    if(NextStair == N){
        return 1;
    }else if(NextStair > N){
        return 0;
    }
    
    for(i=0; i<M; i++){
        if(NextStair == aM[i]){return 0;}
    }
    
    
    for (i=0; i<patternNum; i++) {
        if(pattern1[i] == CurrentStair && CurrentStair != 0){
            return pattern2[i];
        }
    }
    
    if (NextStair + 2 <= N) {
        CaseNum = SearchCase(NextStair, NextStair+1, aM, pattern1, pattern2, N, M);
        CaseNum += SearchCase(NextStair, NextStair+2, aM, pattern1, pattern2, N, M);
    }else if(NextStair + 1 <= N){
        CaseNum = SearchCase(NextStair, NextStair+1, aM, pattern1, pattern2, N, M);
    }
    

    if(CaseNum > 4294967294){exit(1);}
    if(CaseNum < 2147483647){
        pattern1[patternNum] = CurrentStair;
        pattern2[patternNum] = CaseNum % 1000000007;
        patternNum++;
    }

    return CaseNum % 1000000007;
}
