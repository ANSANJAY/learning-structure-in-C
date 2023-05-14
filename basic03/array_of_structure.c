#include<stdio.h>

typedef struct
{
int roll;
char name[50];
int marks;
}Stu;

int main()
{
Stu s[3] = {{1,"ram",45},{2,"shyam",56},{3,"laxs",73}};
printf("data for student one:\n %d\n %s\n %d\n",s[0].roll,s[0].name,s[0].marks);
return 0;
}


/* Expected output
data for student one:
 1
 ram
 45
 */
 
