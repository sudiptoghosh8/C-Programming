#include<stdio.h>
#include<string.h>
struct Student
{
     int ID;
    char Name[25];
    char Department[20];
    char address[100];
};

/*typedef struct
{
     int ID;
    char Name[25];
    char Department[20];
    char address[100];
}Student; */

int main()
{
    struct Student std[100];
    for(i=0;i<100;i++)
    {
       scanf("%d", &std[i].ID);
       gets(std[i].Name);
        gets(std[i].Department);
        gets(std[i].address);
    }
    // complete this code
    printf("Roll of Student one: %d\n", std.ID);
    printf("Name of Student one: %s\n", std.Name);
    printf("Department of Student one: %s\n", std.Department);
    printf("address of Student one: %s\n", std.address);
    return 0;
}