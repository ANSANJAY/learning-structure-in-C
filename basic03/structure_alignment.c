#include <stdio.h>

typedef struct
{
    char c;
    short int s;
}Stuct_a;

typedef struct
{
    short int s;
    char c;
    int i;

}Stuct_b;

typedef struct
{
    char c;
    double d;
    int s;
}Stuct_c;

typedef struct
{
    double d;
    int s;
    char c;
}Stuct_d;

int main()
{
    printf("sizeof(Struct_a)=%d\n",sizeof(Stuct_a));//expected :  3
    printf("sizeof(Struct_b)=%d\n",sizeof(Stuct_b));//expected :  7
    printf("sizeof(Struct_c)=%d\n",sizeof(Stuct_c));//expected : 13
    printf("sizeof(Struct_d)=%d\n",sizeof(Stuct_d));//expected : 13
    return 0;
}

/*
sizeof(Struct_a)=4
sizeof(Struct_b)=8
sizeof(Struct_c)=24
sizeof(Struct_d)=16

declare the structure in either increasing / decreasing sizes

*/
