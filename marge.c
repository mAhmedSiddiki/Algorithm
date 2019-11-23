#include<stdio.h>

void merge(int left[],int right[],int arr[]){
    int nleft = sizeof(left)/sizeof(int);
    int nright = sizeof(right)/sizeof(int);
    int i=0,j=0,k=0;
    while(i<nleft && j<nright){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++;
        }else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nleft){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<nright){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[]){

    int mid,n = sizeof(arr)/sizeof(int);
    printf("\n%d\n",n);

    if(n<2){
        return;
    }else{
        mid = n/2;
    }

    int left[mid],right[n-mid],i;

    for(i=0;i<mid-1;i++){
        left[i] = arr[i];
    }
    for(i=mid;i<n-1;i++){
        right[i-mid] = arr[i];
    }
    merge_sort(left);
    merge_sort(right);
    merge(left,right,arr);
}

int main()
{
    int i,arr[] = {2,4,1,6,8,5,3,7};

    int len = sizeof(arr)/sizeof(int);

    printf("len = %d\n",len);

    for(i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    merge_sort(arr[len]);

    for(i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
