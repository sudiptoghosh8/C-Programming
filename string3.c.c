#include<stdio.h>
int main()
{
    int v;
    int *p;
    char ch;
    char a[100];
    a[0]='A';
    char *s[100]; // pointer string
for(v=0; v<10; v++)
{
    scanf("%s", &s[v]);
}
for(v=0; v<10; v++)
{
    printf("%s", s[v]);
}

    return 0;
}