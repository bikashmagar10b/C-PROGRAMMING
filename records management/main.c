#include<stdio.h>
#include<string.h>
#include"student.c"
#include"employee.c"
int main()
{
    char records[10];
    printf("Enter [student] for student records and [employee] for employee records\n");
    printf("Records of :");
    scanf("%s",records);

    if(strcmp(records,"student")==0)
    {
        student_rec();
    }
    else if(strcmp(records,"employee")==0)
    {
        employee_rec();
    }
    else
    {
        printf("Error Input!!!!");
    }
    return 0;
}