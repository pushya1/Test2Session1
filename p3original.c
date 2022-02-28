// 3. Write a program find whether a given number is a prime number.
#include <stdio.h>
int input_number()
{   
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    return n;
    
}

int is_prime(int n)
{
   int i;
   int r=0;
   for (i=1;i<=n;i++)
   {
       if(n%i==0)
       r++;
   }
   return r;
}
void output(int r)
{
    if (r==2||r==1)
    printf("The entered number is prime\n");
    else
    printf("The entered number is not prime\n");
}
int main()
{
    int n,r;
    n=input_number();
    r=is_prime(n);
    output(r);
    return 0;
}