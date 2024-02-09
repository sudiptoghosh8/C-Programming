#include<stdio.h>
int main()
{
    char ch;
    int a[100000];
    char s[1000000]="Hello world. Welcome to programming world";
      //string = character array

    int l= strlen(s);

    printf("string length = %d\n%s", l,s);
    //printf("%s\n", s);

    return 0;
}