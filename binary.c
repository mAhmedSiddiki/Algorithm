#include<stdio.h>

void binary(int first,int last);

int arr[10],i,first,last,middle,se;

int main()
{

    printf("Enter numbers: ");
    for(i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter search number: ");
    scanf("%d",&se);

    first = 0;
    last = 9;
    middle = (first+last)/2;

    binary(first,last);

    return 0;
}

void binary(int first,int last)
{
    if(first<=last){
        if(arr[middle] == se){
            printf("Matched Number: %d",arr[middle]);
            return;
        }else if(arr[middle] < se){
            first = middle + 1;
            middle = (first + last) / 2;
            binary(first,last);
        }else{
            last = middle - 1;
            middle = (first + last) / 2;
            binary(first,last);
        }
    }else{
        printf("Not matched");
    }
}
