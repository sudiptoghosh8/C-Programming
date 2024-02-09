#include<stdio.h>
int main()
{
    char ch;
    int a[100000];
    char s[1000000];
      //string = character array
     // scanf("%s",&s);
    gets(s);   // scanf
    int l= strlen(s);
  // print
    printf("string length = %d\n", l);
    puts(s);
    //printf("%s\n", s);

    return 0;
}