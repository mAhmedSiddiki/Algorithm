#include<stdio.h>
int main(){
	int i,n;
	printf("How many character you input: ");
	scanf("%d",&n);
	
	int num[n];
	char chararr[n];
		
	printf("Enter charecter: \n");
	for(i=0;i<n;i++){
		printf("No: %d\n\t",i+1);
		scanf("%c",&chararr[i]);
	}
	
	return 0;
}
