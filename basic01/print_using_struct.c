#include<stdio.h>

struct date
{
    int date;
    int month;
    int year;
};
void printdate (struct date);
int main()
{
    struct date dob;
    
    dob.date = 20;
    dob.month =10;
    dob.year = 1996; 
    printdate(dob);
}



void printdate(struct date d)
{
    printf(" %d/%d /%d\n",d.date,d.month,d.year);

}
