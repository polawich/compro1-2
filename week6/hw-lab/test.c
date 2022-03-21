#include <stdio.h>
main(){
	int i,length;
	
	printf("\nInput number of data = ");
	scanf("%d",&length);
	
	int score[length];
	int sum = 0;
	
	for(i=0;i<length;i++){
		printf("\nData [%d] = ",i);
		scanf("%d",&score[i]);
		sum += score[i];
	}
	
	printf("\nSUM = %d",sum);
}