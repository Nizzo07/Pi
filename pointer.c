#include<stdio.h>

void pointer1()
{
    int b = 42;

    int *a = &b;

    printf("b = %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);

    *a = 50;
    printf("b = %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);

}
void pointer2()
{
    int a, b, c;
    a = b = c = 0;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Result = %d\n", a + b + c);
}

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void pointer3()
{
    int x, y;
    x = 5;
    y = 10;
    printf("%d %d\n", &x, &y);
    swap(&x, &y); 
    printf("%d %d\n", &x, &y);

}


int main()
{
    pointer3();
    return 0;
}