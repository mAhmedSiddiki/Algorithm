#include<stdio.h>
int main()
{
    int i,j,arr[5] = {7,9,2,12,1},value,mark,temp;

    for(i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(i=0;i<5-1;i++){
        value = arr[i];
        mark = i;
        for(j=i+1;j<5;j++){
            if(arr[j]<value){
                value = arr[j];
                mark = j;
            }
        }
        temp = arr[mark];
        arr[mark] = arr[i];
        arr[i] = temp;
    }

    for(i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
