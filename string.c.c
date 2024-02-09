#include<stdio.h>
int main()
{
    char ch;
    int a[100000];
     char s[100];   //string = character array
     s[0]= '0';
     s[1]= 'a';
     s[2]= 'i';
     s[3]= 's';
     s[4]= 'a';
     s[5]= 'l';
     s[6]= '\0';

     int l= strlen(s);

     printf("string length = %d\n %s", l,s);
     //printf("%s\n", s);

    return 0;
}