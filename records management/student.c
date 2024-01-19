#include<stdio.h>
struct std_rec
{
    int roll;
    char name[20];
    float gpa;
};


void student_rec()
{
    FILE *fp;
    int number_of_std,i;

    printf("Enter the number of students:");
    scanf("%d",&number_of_std);

    struct std_rec rec[number_of_std];

    fp = fopen("studentrec.txt","w");
    printf("Enter records of Students\n");

    for(i=0;i<number_of_std;i++)
    {
        printf("Student %d",i+1);
        printf("\nName:");
        scanf("%s",rec[i].name);
        printf("Roll:");
        scanf("%d",&rec[i].roll);
        printf("Gpa:");
        scanf("%f",&rec[i].gpa);
        // printing in file
        fprintf(fp,"%d\t\t%s\t\t%f\n",rec[i].roll,rec[i].name,rec[i].gpa);
    }
    fclose(fp);

    fp = fopen("studentrec.txt","r");

    printf("\nDisplaying records from the file\n");
    printf("Roll\t\tName\t\tGpa\n");

    while(fscanf(fp,"%d%s%f",&rec[i].roll,rec[i].name,&rec[i].gpa)!=EOF);
    {
        printf("%d\t\t%s\t\t%f\n",&rec[i].roll,rec[i].name,&rec[i].gpa);
    }
    fclose(fp);

}