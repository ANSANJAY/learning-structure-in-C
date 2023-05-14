#include <stdio.h>

typedef struct
{
    int date;
    int mon;
    int year;
}Date;

typedef struct
{
    int id;
    Date dob;
    Date joining;
}Employ;

int main()
{

    Employ e1;
    e1.id = 57;
    e1.dob.date = 28;
    e1.dob.mon = 10;
    e1.dob.year = 1996;

    printf ("Employ details : %d\n %d\n %d\n %d\n",e1.id,e1.dob.date,e1.dob.mon,e1.dob.year);

    return 0;

}

/* Expected output 

Employ details : 57
 28
 10
 1996

 */
 
