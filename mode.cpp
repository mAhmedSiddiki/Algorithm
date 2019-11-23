#include<stdio.h>

int main() {
	int n,i,count = 0,j,maxCount = 0,maxValue = 0;
	
	printf("How many numbers you input: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
          if(arr[j] == arr[i])
          count++;
       }
      
       if (count > maxCount) {
          maxCount = count;
          maxValue = arr[i];
       }
       count = 0;
    }
	
    printf("Mode = %d ",maxValue);

    return 0;
}
