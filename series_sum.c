
 /* 1/3 + 2/4 + 3/5 +...+ n/n+2; */

 #include<stdio.h>
 int main()
 {
     int n, i;
     scanf("%d", &n);
     float v=1, r;
     float sum=0;
     for(i=1;i<=n;i++)
     {
             r= v/ (v+2); // value
             sum+= r;
             v++;
     }
     printf("Summation of the series= %f \n", sum);
     return 0;
 }