//CSE 2315 Summer 2020 Tiernan
//Name: Ivan Martinez
//Question #4
//Programming language used for homework: C
//IDE and compiler used for homework: gcc
//Any additional info that would be needed for someone to run the program and grade it: This was fun to program!

#include <stdio.h>

int Bats(int n);

void main ()
{
    int n, bResult;
    printf("Enter a value for n (n>0) or input 0 to quit: ");
    scanf("%d",&n);
    if(n == 0)
    {
        return;
    }
    bResult = Bats(n);
    printf("\nThe count at %d was %d\n\n",n*2,bResult);
    return main();
}

int Bats(int n)
{
    if(n == 1)
    {
        return 12000;
    }
    else
    {
        return (Bats(n-1)*1.5);
    }
}
