//CSE 2315 Summer 2020 Tiernan
//Name: Ivan Martinez
//Question #1
//Programming language used for homework: C
//IDE and compiler used for homework: gcc
//Any additional info that would be needed for someone to run the program and grade it: Make sure to compile with math library linked.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int BinomialTheorem(int a, int b, int n);
int Exponential(int a, int b, int n);
int Multiplication(int a, int b, int n);
int C(int n, int k);

void main ()
{
    char check;
    int a,b,n=-1, btResults, eResults, mResults;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    while(n <= -1)
    {
        printf("Enter a value for n (n>=0): ");
        scanf("%d",&n);
    }
    btResults = BinomialTheorem(a,b,n);
    eResults = Exponential(a,b,n);
    mResults = Multiplication(a,b,n);
    printf("\n(%d+%d)^%d = %d Binomial Theorem Method\n",a,b,n,btResults);
    printf("\n(%d+%d)^%d = %d Exponential Method\n",a,b,n,eResults);
    printf("\n(%d+%d)^%d = %d Multiplication Method\n",a,b,n,mResults);
    if(btResults == eResults && eResults == mResults)
    {
        printf("\nAll the Method Results Match!\n");
    }
    else
    {
        printf("\nOne or None of the Mehod Results Match!\n");
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

int BinomialTheorem(int a, int b, int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return (a + b);
    }
    if(n > 1)
    {
        int result = 0;
        for(int k = 0; k < n+2;k++)
        {
            result = result + (C(n,k) * (int)(pow((double)a,(double)(n-k))*pow((double)b,(double)k)));
        }
        return result;
    }
}

int C(int n, int k)
{
    int factn = 1;
    int factk = 1;
    int factnk = 1;
    for(int u = 1; u < n+1;u++)
    {
        factn *= u;
    }
    for(int u = 1; u < k+1;u++)
    {
        factk *= u;
    }
    for(int u = 1; u < (n-k)+1;u++)
    {
        factnk *= u;
    }
    return (factn/(factk*factnk));
}

int Exponential(int a, int b, int n)
{
    int result = (int)pow((double)(a+b),(double)n);
    return result;
}

int Multiplication(int a, int b, int n)
{
    int result = a + b;
    for(int count = 1; count < n; count++)
    {
        if(count == 1)
        {
            result = (a*a)+(a*b)+(b*a)+(b*b);
        }
        else
        {
            result = (result*a)+(result*b);
        }
    }
    return result;
}
