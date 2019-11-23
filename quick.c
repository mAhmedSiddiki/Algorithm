#include<stdio.h>

int partition(int arr[],int first,int last);
void quick_sort(int arr[],int first,int last);

int main(){
	int i,arr[100],n;
	
	printf("How many numbers you input: ");
	scanf("%d",&n);
	
	printf("Enter numbers: \n");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	quick_sort(arr,0,n-1);
	
	printf("\n\nAfter sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}

void quick_sort(int arr[],int first,int last){
	int pindex;
	if(first<last){
		pindex = partition(arr,first,last);
		quick_sort(arr,first,pindex-1);
		quick_sort(arr,pindex+1,last);
	}
}

int partition(int arr[],int first,int last){
	int pivot,pindex,i,temp;
	pivot = arr[last];
	pindex = first;
	for(i=first;i<last;i++){
		if(arr[i] <= pivot){
			temp = arr[i];
			arr[i] = arr[pindex];
			arr[pindex] = temp;
			pindex++;
		}
	}
	temp = arr[i];
	arr[i] = arr[pindex];
	arr[pindex] = temp;
	
	return pindex;
}
