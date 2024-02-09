 /* 1 + 2 +4 + 8 + 16 +..... nth value
  1 4 7 10 13
 1 4 8 13 19
 1/3 + 2/4 + 3/5 +...+ n/n+2; */

 #include<stdio.h>
 int main()
 {
     int i, n;
     scanf("%d", &n);
     int v=1, d=3;
     int sum=0;
     for(i=1;i<=n;i++)
     {
         if(i==1)
         {
             sum= sum+ v;
            // continue;
         }
         else
         {

             v=v+d; // value
             sum+= v;
             d++;     // 1+2 + 4
            // sum = sum + v;
         }
     }
     printf("Summation of the series= %d \n", sum);
     return 0;
 }