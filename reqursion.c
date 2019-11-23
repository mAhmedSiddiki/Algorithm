#include<stdio.h>

void method(int a)
{
    printf("%d ",a);

    if(a == 0){
        return;
    }

    method(a-1);

    printf("%d ",a);
}

int main()
{
    int a = 4;
    printf("%d ",a);

    method(a-1);

    printf("%d ",a);

    return 0;
}
