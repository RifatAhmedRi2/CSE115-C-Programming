#include <stdio.h>
#define NUM_STUDENTS 2

struct student
{
    int StudentID;
    int Marks1;
    int Marks2;
    char Grade1;
    char Grade2;
};
typedef struct student StudentData;

void Scan(StudentData student[]);

void Grade(StudentData student[]);

void main ( )
{
    StudentData student[NUM_STUDENTS];
    Scan(student);
    Grade(student);
}
void Scan(StudentData student[])
{
    int i;
    for (i=0; i<NUM_STUDENTS; i++)
    {
        printf("Enter the StudentID: ");
        fflush(stdin);
        scanf("%d", &student[i].StudentID);
        fflush(stdin);
        printf("Enter the Marks of 1st Subject: ");
        scanf("%d", &student[i].Marks1);
        fflush(stdin);
        printf("Enter the Marks of 2nd Subject: ");
        scanf("%d", &student[i].Marks2);
        fflush(stdin);
        printf("\n");

    }
}
void Grade(StudentData student[])
{
    int i;
    for (i=0; i<NUM_STUDENTS; i++)
    {
        if (student[i].Marks1 >= 90)
            student[i].Grade1 = 'A';
        else if (student[i].Marks1 >=80)
            student[i].Grade1 = 'B';
        else if (student[i].Marks1 >= 70)
            student[i].Grade1 = 'C';
        else if (student[i].Marks1 >= 60)
            student[i].Grade1 = 'D';
        else
            student[i].Grade1 = 'F';
        printf("ID No: %d - Grade for 1st Subject is: %c\n", student[i].StudentID, student[i].Grade1);

        if (student[i].Marks2 >= 90)
            student[i].Grade2 = 'A';
        else if (student[i].Marks2 >= 80)
            student[i].Grade2 = 'B';
        else if (student[i].Marks2 >= 70)
            student[i].Grade2 = 'C';
        else if (student[i].Marks2 >= 60)
            student[i].Grade2 = 'D';
        else
            student[i].Grade2 = 'F';
        printf("ID No: %d - Grade for 2nd Subject is: %c\n", student[i].StudentID, student[i].Grade2);
        printf("\n");
    }
}
