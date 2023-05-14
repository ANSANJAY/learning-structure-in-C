//Swap two distances using structure and pointer

#include <stdio.h>

typedef struct
{
    int feet;
    int inches;
}Distance;

void swap (Distance *,Distance *);

int main()
{
    Distance *d1,*d2;
    printf("Enter the first distance : ");  
    scanf("%d%d", &d1->feet,&d1->inches );
    printf("Enter the second distance : ");
    scanf("%d%d", &d2->feet,&d2->inches );

    swap(d1,d2);
     printf("swapped first distance : %d feet %d inches\n",d1->feet,d1->inches);  
     printf("swapped second distance : %d feet %d inches\n",d2->feet,d2->inches); 
    return 0;
}

void swap(Distance *d1,Distance *d2)
{
int t;
 
t= d2->feet;
d2->feet=d1->feet;
d1->feet = t;
t= d2->inches;
d2->inches=d1->inches;
d1->inches = t;
}


/*Expected Output
Enter the first distance : 4
5
Enter the second distance : 3
2
swapped first distance : 3 feet 2 inches
swapped second distance : 4 feet 5 inches
*/
