#include<stdio.h>

void print(int arr[],int n);
void bubble_sort(int arr[],int n);
void insertion_sort(int arr[],int n);

int main(){
	int i,n,choose,m=1,arr[100],no;
	
	while(m==1){
		printf("How many number you input: ");
		scanf("%d",&n);
		
		printf("Enter numbers: ");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		system("cls");
		
		printf("\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Merge Sort\n5. Quick Sort");
		printf("\n\nWhat do you want to sort ?  ");
		scanf("%d",&choose);
		
		printf("\n\nBefore sort:  ");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		
		if(choose == 1){
			bubble_sort(arr,n);
			print(arr,n);
			getch();
			system("cls");
		}else if(choose == 2){
			insertion_sort(arr,n);
			print(arr,n);
			getch();
			system("cls");
		}else if(choose == 3){
			selection_sort(arr,n);
			print(arr,n);
			getch();
			system("cls");
		}
		
		printf("Do you want to exit ?\n1. Yes\n2. No\n");
		scanf("%d",&no);
		
		if(no==1){
			m=2;
		}
		system("cls");
	}
	printf("Thanks to you..........");
	
	return 0;
}

void print(int arr[],int n){
	int i;
	
	printf("\nAfter sort:  ");
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void bubble_sort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void insertion_sort(int arr[],int n){
	int i,value,mark;
	for(i=0;i<n;i++){
		value = arr[i];
		mark = i;
		while(mark>0 && arr[mark-1]>value){
			arr[mark] = arr[mark - 1];
			mark--;
		}
		arr[mark] = value;
	}
}
