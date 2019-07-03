#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int wi[100] = {0};
    int i = 0;
    int N, T;
    int SumW = 0;
    int SumT = 0;
    int minimam = 0;
    int Tabs = 0;
    
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&wi[i]);
        SumW += wi[i];
    }
    minimam = SumW;
    
    for(T=1; T<N; T++){
        for(i=0; i<=T; i++){
            SumT += wi[i];
        }
        Tabs = abs(SumT - (SumW-SumT));
        if(Tabs < minimam){
            minimam = Tabs;
        }
        SumT = 0;
    }
    
    printf("%d\n", minimam);
    return 0;
}
