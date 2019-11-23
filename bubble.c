#include<stdio.h>
int main()
{
    int i,j,arr[5] = {10,2,15,8,1},temp;

    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
