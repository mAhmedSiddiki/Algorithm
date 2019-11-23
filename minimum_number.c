#include<stdio.h>
int main(){
	int n,s,l,i;
	printf("How many number you input: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	if(arr[0]<arr[1]){
		s = arr[0];
		l = arr[1];
	}else{
		l = arr[0];
		s = arr[1];
	}
	
	for(i=2;i<n;i++){
		if(s>arr[i]){
			l = s;
			s = arr[i];
		}else if(l>arr[i]){
			l = arr[i];
		}
	}
	
	printf("Minimum: %d\n2nd minimum: %d",s,l);
	
	return 0;
}
