#include<stdio.h>

void sum_coin(float arr[],float coin,int n);
void sort(float arr[],int n);

int main(){
	int i,n;
	printf("How many coin you input: ");
	scanf("%d",&n);
	
	float arr[n],coin;	
	printf("Enter coin value:\n");
	for(i=0;i<n;i++){
		scanf("%f",&arr[i]);
	}
	
	sort(arr,n);
	printf("\nAfter sorting coin value:\n");
	for(i=0;i<n;i++){
		printf("%.2f ",arr[i]);
	}
	
	printf("\n\nSum of coin: ");
	scanf("%f",&coin);
	
	printf("\n");
	
	sum_coin(arr,coin,n);
	
	return 0;
}

void sort(float arr[],int n){
	int i,mark;
	float value;
	for(i=0;i<n;i++){
		value = arr[i];
		mark = i;
		while(mark>0 && arr[mark-1]<value){
			arr[mark] = arr[mark-1];
			mark--;
		}
		arr[mark] = value;
	}
}

void sum_coin(float arr[],float coin,int n){
	int i = 0,num;
	
	while(coin > 0){
		if(i<n){
			num = coin / arr[i];
			printf("Payout %d coin of value %.2f .\n",num,arr[i]);
			coin = coin - num * arr[i];
			i++;
		}else{
			return;
		}
	}
}
