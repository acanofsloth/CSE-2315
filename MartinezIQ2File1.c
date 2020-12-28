//CSE 2315 Summer 2020 Tiernan
//Name: Ivan Martinez
//Question #2
//Programming language used for homework: C
//IDE and compiler used for homework: gcc
//Any additional info that would be needed for someone to run the program and grade it: This was fun to program!

#include <stdio.h>
#include <stdlib.h>

int L(int n);
int F(int n);

void main ()
{
    char check;
    int n, lResult, f1Result,f2Result;
    printf("Input value for n (n>0): ");
    scanf("%d",&n);
    lResult = L(n);
    f1Result = F(n+1);
    f2Result = F(n-1);
    printf("\nLucus Sequence: L(%d) = %d",n,lResult);
    printf("\n\nFubonacci Sequence:",lResult);
    printf("\nF(%d-1) = %d",n,f2Result);
    printf("\nF(%d+1) = %d",n,f1Result);
    if(lResult == (f1Result+f2Result))
    {
        printf("\n\nL(%d) and F(%d-1)+F(%d+1) are equal!\n",n,n,n);
    }
    else
    {
        printf("\n\nL(%d) and F(%d-1)+F(%d+1) are not equal\n",n,n,n);
    }
    
    printf("\nDo you want to try again? (y/n): ");
    scanf(" %c",&check);
    if(check == 'y')
    {
        //system("clear");
        printf("\n");
        main();
    }
}

int L(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 3;
    }
    if(n > 2)
    {
        return L(n-1)+L(n-2);
    }
}

int F(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 1;
    }
    if(n > 2)
    {
        return F(n-1)+F(n-2);
    }
}
