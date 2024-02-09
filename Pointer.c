#include<stdio.h>
int res; // globally

//void func()
// call by reference
int main()
{
    int v1,v2;
    int *p1, *p2; // pointer = *
    p1= &v1;
    p2= &v2;

    scanf("%d%d", &v1, &v2);
    int sum= *p1 + *p2;
   // printf("address is %x \n %x\n", &v1, &v2);
    //printf("value is %d \n %d\n", v1, v2);
     printf("value is %d \n",sum);

    return 0;
}