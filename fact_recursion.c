#include<stdio.h>
int fact(int x)
{
    if(x==0) return 1; //base case
    else
    {
         return x* fact(x-1);  //return type
    }

}
// base_case if/else
// return


int main()
{
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int res= fact(n); // parameter 6= argument
    printf("%d\n", res);
   }



}