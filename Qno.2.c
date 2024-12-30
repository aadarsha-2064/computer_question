/* To input 10 student Rollno,Name,age and marks and sort the data of student 
in descending order according to marks scored
*/
#include <stdio.h>
#include <string.h>


struct student {
    int roll;
    char name[50];
    int age;
    int marks;
};

int main() {
    struct student s[10];  
    int i, j;

    
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            
            if (s[i].marks < s[j].marks) {
               
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Student Details (Descending by Marks):\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %d\n", s[i].marks);
    }

    return 0;
}
