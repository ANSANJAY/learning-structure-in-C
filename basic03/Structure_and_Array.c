#include<stdio.h>

typedef struct
{
    int roll;
    char name[50];
    int marks;
}Stu;

int main()
{
    Stu s1;
    printf("Enter the data for student : ");
    scanf("%d %s %d",&s1.roll,s1.name,&s1.marks); \\string does not have & operator
    printf("roll : %d\nname : %s\nmarks: %d\n",s1.roll,s1.name,s1.marks);

return 0;
}

/*
Enter the data for student :   
34
ram
23
roll : 34
name : ram
marks: 23
*/
