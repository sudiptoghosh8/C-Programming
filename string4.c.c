#include<stdio.h>
int main()
{
    int v;
    int *p;
    char ch;
    char a[100];
    a[0]='A';
    char *s[100]; // pointer string
    s[0]="Ajsfhjisdfhiuoegj";
    s[0] += 10;
    s[1]= "dsuhdg";
    int l= strlen(s[0]);
    printf("%d\n", l);
    printf("%s\n", s[0]);
     printf("%s", s[1]);

    return 0;
}