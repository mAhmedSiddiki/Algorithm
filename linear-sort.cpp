#include<stdio.h>

void insertion(int arr[],int n){
	int i,value,mark;
	for(i=1;i<n;i++){
		value = arr[i];
		mark = i;
		while(mark>0 && arr[mark-1] > value){
			arr[mark] = arr[mark-1];
			mark--;
		}
		arr[mark] = value;
	}
}

int main(){
	int i,arr[] = {5,7,2,9,1,8};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	insertion(arr,n);
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
