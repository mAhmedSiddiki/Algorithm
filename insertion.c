#include<stdio.h>

int main(){
  int i,value,mark;
  int arr[5] = {7,3,9,1,5};

  for(i=0;i<5;i++){
    printf("%d ",arr[i]);
  }

  printf("\n");

  for(i=1;i<5;i++){
    value = arr[i];
    mark = i;
    while(mark>0 && arr[mark-1]>value){
      arr[mark] = arr[mark-1];
      mark = mark - 1;
    }
    arr[mark] = value;
  }

  for(i=0;i<5;i++){
    printf("%d ",arr[i]);
  }

  return 0;
}
