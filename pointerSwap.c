#include<stdio.h>
void swap(int *x,int *y) // *x=10 *y=5
                      //  x= &a   y=&b
{
   int temp= *x;
   *x=*y;
   *y=temp;       // *x=5 *y=10
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    swap(&a,&b); // call by reference
    printf("a= %d b=%d\n", a, b);

    return 0;
}