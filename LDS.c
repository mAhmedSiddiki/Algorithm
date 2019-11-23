#include<stdio.h>

int main(){
	
	int number,i,value = 0,j;
	
	printf("How many number input: ");
	scanf("%d",&number);
	
	int array[number],LDS[number];
	
	printf("Enter numbers: ");
	for(i=0;i<number;i++){
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<number;i++){
		LDS[i] = 1;
	}
	
	for(i=1;i<number;i++){
		for(j=0;j<i;j++){
			if(array[i] < array[j] && LDS[i] < LDS[j] + 1){
				LDS[i] = LDS[j] + 1;		
			}
		}
	}
	
	printf("\nLDS value: ");
	
	for(i=0;i<number;i++){
		if(value < LDS[i]){
			printf("%d ",array[i]);
			value = LDS[i];
		}
	}
	
	printf("\n\nLength: %d",value);
	
	return 0;
}
