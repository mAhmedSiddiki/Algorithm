#include<stdio.h>

int knapshak(int item[],int weight[],int perml[],int index[],int se,int n){
	int i,mark,ha = 0,hi,sum = 0;
	
	for(i=0;i<n;i++){
		if(ha == se){
			break;
		}else{
			mark = index[i];
			if((ha + weight[mark]) > se){
				hi = se - ha;
				printf("%d ml of item %d = %d tk\n",hi,item[mark],hi*perml[mark]);
				ha = ha + hi;
				sum = sum + (hi * perml[mark]);
 			}else{
 				printf("%d ml of item %d = %d tk\n",weight[mark],item[mark],weight[mark]*perml[mark]);
				ha = ha + weight[mark];
				sum = sum + (weight[mark]*perml[mark]);
			 }
		}	
	}
	return sum;
}

void sortindex(int perml[],int index[],int n){
	int i,j,max,temp;
	for (i = 0; i < n; i++)
    {
        max = i;
        
        for (j = i+1; j < n; j++)
        {
            if (perml[j] > perml[max])  {
                max = j;
            }
        }
        
        temp = perml[i];
        perml[i] = perml[max];
        perml[max] = temp;
        
        temp = index[i];
        index[i] = index[max];
        index[max] = temp;
    }

}

void printdata(int item[],int weight[],int price[],int perml[],int n){
	int i;
	
	printf("\n\n\t");
	for(i=0;i<n;i++){
		printf("Item-%d\t",item[i]);
	}
	
	printf("\nWeight:\t");
	for(i=0;i<n;i++){
		printf("%d ml\t",weight[i]);
	}
	
	printf("\nPrice:\t");
	for(i=0;i<n;i++){
		printf("%d tk\t",price[i]);
	}
	
	printf("\nPer ml:\t");
	for(i=0;i<n;i++){
		perml[i] = price[i]/weight[i];
		printf("%d tk\t",perml[i]);
	}
}

int main(){
	int i,n;
	printf("How many item you input: ");
	scanf("%d",&n);
	
	int weight[n],price[n],perml[n],item[n],index[n],newperml[n];

	printf("Enter weight and price:\n");
	for(i=0;i<n;i++){
		item[i] = i+1;
		printf("Item no: %d\n      Weight: ",i+1);
		scanf("%d",&weight[i]);
		printf("      Price: ");
		scanf("%d",&price[i]);
	}
	
	printdata(item,weight,price,perml,n);
	
	int j;
	for(i=0,j=0;i<n;i++,j++){
		newperml[i] = perml[j];
	}
	
	
	for(i=0;i<n;i++){
		index[i] = i;
	}
	
	sortindex(newperml,index,n);
	
	int se;
	printf("\n\nEnter your weight: ");
	scanf("%d",&se);
	printf("\n");
	
	int sum = knapshak(item,weight,perml,index,se,n);
	
	printf("\nTotal Profit: %d tk",sum);
	
	return 0;
}

