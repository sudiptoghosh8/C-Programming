#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int i, cnt=0;
    char s[10000];
    gets(s); //"123ab" //s[5]='\0';
    char ch;
    //ch='a';  //frequency calculation
    scanf("%c", &ch);
    int l= strlen(s);  //0 1 2 3 4
    //puts(s); //print
   // for(i=0; i<l; i++ )
    for(i=0; s[i]!='\0'; i++ )
    {
       if(s[i]==ch)
       {
          cnt++;
       }
    }
  printf("frequency of character= %d", cnt);

    return 0;
}