#include<stdio.h>
int main(){
	
	int n,s=0,i;
	printf("How many numbers you input: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		s = s + arr[i];
	}
	
	float median = s / n;
	
	printf("Mean: %.2f",median);
	
	return 0;
}
