/* 
To input 10 employe id,Name,DoB,salary a
nd address and display it in proper format
*/
#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    int DOB;
    int salary;
    char address[50];
};

int main(){
    struct employee e[10];
    int i;
    for (i = 0; i <10; i++)
    {
       printf("Enter a id:");
       scanf("%d",&e[i].id);
       printf("Enter a Name:");
       scanf("%s",e[i].name);
       printf("Enter a DOB:");
       scanf("%d",&e[i].DOB);
       printf("Enter a salary:");
       scanf("%d",&e[i].salary);
       printf("Enter a address:");
       scanf("%s",e[i].address);
    }
    for ( i = 0; i <10; i++)
    {
        printf("Id=%d\nName=%s\nDOB=%d\nSalary=%d\naddress=%s\n",e[i].id,e[i].name,e[i].DOB,e[i].salary,e[i].address);
    }
    
    return 0;
}