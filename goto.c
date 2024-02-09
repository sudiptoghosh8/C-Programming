#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d", &n);
    int sum=0;
    int cnt=0;
    Z:
    sum=sum + i;
    i++;
    if(i<=n)
        {
            cnt++;
            goto Z;
        }

        printf("sum= %d\n", sum);
        printf("count= %d", cnt);

    return 0;
}