#include<stdio.h>
int fibo(int x)  // x= n = 7
{
    if(x==0) return 0;
    if(x==1) return 1;  // base case
    return fibo(x-1) + fibo(x-2); // fibo(6) + fibo(5)
}
int main()
{
    int n,m,i;
    scanf("%d", &n);
     // 0 1 1 2 3 5 8 13 21 34 55 89
     for( i=0; i<= n; i++)
    {
        m=i;
        int res= fibo(m); //return value
        printf("%dth value of fibonacci series is %d\n", m, res);
    }
    return 0;
}