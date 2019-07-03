#include<stdio.h>

int main(void){
	int P, Q, R;
	int SUM[6] = {0};
	int i;
	int minimam = 0;

	scanf("%d %d %d", &P, &Q, &R);
	SUM[0] = P + Q;
	SUM[1] = R + Q;
	SUM[2] = P + R;
	SUM[3] = Q + R;
	SUM[4] = R + P;
	SUM[5] = Q + P;

	minimam = SUM[0];
	for(i=1; i< 6; i++){
		if(minimam > SUM[i]){
			minimam = SUM[i];
		}
	}
	printf("%d\n", minimam);
	return 0;
}
