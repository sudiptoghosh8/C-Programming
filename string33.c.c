#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    int vcnt=0, ccnt=0, numcnt=0, others=0;
    gets(s);
  
   // a-z 97-122   A-Z 65-90   0-9 48-57   * ' ' /
   int l= strlen(s);

   for(i=0; i<l;i++)
   {
       if((s[i]>= 97 && s[i]<=122) || (s[i]>= 65 && s[i]<=90))
       {
          if(s[i]=='a' || s[i]=='A' || s[i]=='E' || s[i]=='e' || s[i]=='i' || s[i]=='I' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' )
          {
            vcnt++;
          }
          else
          {
              ccnt++;
          }
       }
       else if(s[i]>=48 && s[i]<=57)
       {
           numcnt++;
       }
       else
       {
           others++;
       }
   }
   printf("vowels= %d consonents= %d numbers= %d others= %d\n", vcnt, ccnt, numcnt, others);



    return 0;
}