#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i, cnt=0, v;
    char s[10000];
    gets(s); //"1010101110"
    //s[0]= '1' s[1]= '0'
    char ch;
    //ch='a';  //frequency calculation
    // scanf("%c", &ch);
    int l= strlen(s);  //0 1 2 3 4
    //length-1
    //puts(s); //print
    // for(i=0; i<l; i++ )
    int p=1;
    int sum=0;
    for(i=l-1; i>=0; i-- )
    {
        ch= s[i];
        v= ch-'0';  // character to integer conversion 
        //v=1

        sum= sum + v*p;  
         //48-48=0
         p=p*2;    //1 2 4 8 16    multiple of 2
    }
    printf("decimal number= %d\n", sum);

    return 0;
}