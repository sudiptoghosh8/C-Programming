#include<stdio.h>
#include<stdlib.h>
int fCubeVolume; // global variable
void cube(int fCubeSide)   //parameter a=10 value= argument

{

 //local variable

fCubeVolume = fCubeSide * fCubeSide * fCubeSide; //a*a*a 1000

//return fCubeVolume; //=1000
}

int main()
{
    int a;  //local variable
    scanf("%d", &a);
   //int res= cube(a);
   //printf("Volume= %d", res);
   cube(a);
   printf("volume= %d", fCubeVolume);

    return 0;
}