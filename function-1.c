#include<stdio.h>

void method_1(int a);
void method_2(int a);
void method_3(int a);
void method_4(int a);

int main()
{
    int a = 10;
    printf("%d ",a);

    method_1(a-1);

    printf("%d ",a);

    return 0;
}

void method_1(int a)
{
    printf("%d ",a);

    method_2(a-1);

    printf("%d ",a);
}

void method_2(int a)
{
    printf("%d ",a);

    method_3(a-1);

    printf("%d ",a);
}

void method_3(int a)
{
    printf("%d ",a);

    method_4(a-1);

    printf("%d ",a);
}

void method_4(int a)
{
    printf("%d ",a);

    return;

    printf("%d ",a);
}
