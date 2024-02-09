#include <stdio.h>
int main( )
{

    FILE *fp;  // File pointer
    char arr[50];  //String
    printf( "Opening the file in read mode: \n" ) ;
    fp = fopen("input2.txt", "r");
    if ( fp == NULL )
    {
        printf( "Could not open the file\n" );
    }
    printf( "Reading the file: \n" );
    while( fgets ( arr, 50, fp ) != NULL )
    {
        printf( "%s", arr);
    }
    printf("Closing the file \n") ;
    fclose(fp) ;
return 0;
}