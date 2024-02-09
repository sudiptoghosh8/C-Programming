#include <stdio.h>
#include<string.h>
int main() {

char s[100]; //string

char t[100];  //string
gets(s);  //scan
//"fdghf"
//strcpy(t,s);
//puts(t);
gets(t);
strcpy(t,strcat(s,t));
//puts(t);
puts(s);
puts(t);

//scanf("%s",&s);
//scanf("%s",&t);
if(strcmp(s,t)==1)
{
  printf("strings are not same");
}
else
{
    printf("strings are same");

}
return 0;
}