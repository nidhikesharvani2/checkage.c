# include<stdio.h>
void main()
{
    int year, age;
    printf("birth of year=");
    scanf("%d",&year);
    age= 2075-year;
    if(age>90)
    {
        printf("i do not think you will be alive");
    }
    else
    {
        printf("i think you will still alive");
    }
}