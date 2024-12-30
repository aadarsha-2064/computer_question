//Qno.1
//id, name ,roll, assress and marks and marks between 35 to 50 of 5 student
#include<stdio.h>
struct student{
    int id;
    char name[50];
    int roll;
    char address[50];
    int marks;
};
int main(){
    struct student s[5];
    int i;
    for ( i = 0; i <5; i++)
    {
       printf("Enter a id");
       scanf("%d",&s[i].id);
       printf("Enter a Name");
       scanf("%s",s[i].name);
       printf("Enter a roll_number");
       scanf("%d",&s[i].roll);
       printf("Enter a address");
       scanf("%s",s[i].address);
       printf("Enter a marks");
       scanf("%d",&s[i].marks);
    }
    for ( i = 0; i <5; i++)
    {
        if (s[i].marks>30 && s[i].marks<50)
        {
            printf("Id=%d\nName=%s\nRoll_number=%d\nAddress=%s\nMarks=%d\n",s[i].id,s[i].name,s[i].roll,s[i].address,s[i].marks);
        }
        
       
    }
 
    return 0;
}
