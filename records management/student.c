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

    printf("\nEnter the number of students:");
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


    if(fscanf(fp,"%d%s%f",&rec[i].roll,rec[i].name,&rec[i].gpa)==0)
    {
        printf("\nNo data in the file!!\n");
    }

    else
    {
    printf("\nData successfully recorded!!!!\n");
    }

    printf("\nDisplaying records from the file\n");
    printf("_________________________________________\n");
    printf("|Roll\t|\tName\t|\tGpa\t|\n");
    printf("|_______|_______________|_______________|\n");
  


    fp = fopen("studentrec.txt","r");


    while(fscanf(fp,"%d%s%f",&rec[i].roll,rec[i].name,&rec[i].gpa)!=EOF)
    {
        printf("|%d\t|\t%s\t|\t%0.2f\t|\n",rec[i].roll,rec[i].name,rec[i].gpa);
        printf("|_______|_______________|_______________|\n");
        
        

    }
    fclose(fp);

}
