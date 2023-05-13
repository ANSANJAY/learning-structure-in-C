# learning-structure-in-C
# structures-in-c

```C
sturct students //definition
{
	int roll; //mmebers
	char name[10];
	float per;
}s1,s2; //object or variable
```

### Object/variable declaration

```
struct student s1, s2;
```
### Structure member function

```C
struct date
{
int day;
int month;
int year;
};
```

```C
struct date {int day;month;year;};
```

**Multiple variable declaration in a line 

```C
struct date borrowed,returned;

```
```C
borrowed.day = 14;
borrowed.month = 11;
borrowed.year = 2015;

```
### to read the value 

```C
scanf("%d %d %d",&borrowed.day,&borrowed.month,&borrowed.year);
```

### Also

```C

struct date borrowed,today;
borrowed = today;
```

