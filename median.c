#include<stdio.h>
int main(){
	int n,i,value,mark;
	
	printf("How many numbers you input: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		value = arr[i];
		mark = i;
		while(mark>0 && arr[mark-1]>value){
			arr[mark] = arr[mark-1];
			mark = mark - 1;
		}
		arr[mark] = value;
	}
	
	printf("Sort Number:  ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	if(n%2 == 0){
		printf("\nMedian: %.2f",((arr[n/2] + arr[n/2 - 1]) / 2.0));
	}else{
		printf("\nMedian: %d",arr[n/2]);
	}
	
	return 0;
}
