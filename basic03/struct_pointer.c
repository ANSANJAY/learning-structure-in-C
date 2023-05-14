#include <stdio.h>

typedef struct {
int roll;
int marks;
}Stu;

int main ()
{
    Stu *p;
    printf("Enter the marks : ");
    scanf("%d",&p->marks); // &
    printf("Marks : %d\n",p->marks);
    return 0;
}

/* Expected output
Enter the marks : 78
Marks : 78
*/
