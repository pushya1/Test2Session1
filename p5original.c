// 5. Write a program to find all the prime numbers between erotosthenes sieve method.
// int input_array_size();
// void init_array(int n, int a[n];
// void erotosthenes_sieve(int n, int a[n]);
// void out_put(int n, int a[n]);
// input:
// 100
// output:
// 2,3,7,11,13,19,23,29,31,...
#include <stdio.h>
int input_array_size()
{
   int n;
   printf("Enter a number:\n");
   scanf("%d",&n);
   return n;
}
void erotosthenes_sieve(int n)
{   
    
    int i,j;
     printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
    
}
int main()
{
    int n,a[n];
    n=input_array_size();
    erotosthenes_sieve(n);
}


/*

#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    return n;
}

void init_array(int n,int a[n])
{   
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=n;i++)
    {
        a[i]=i;
    }

}

void erotosthenes_sieve(int n,int a[n])
{
    for(int i=2;i<n;i++)
    {
        for(int k=i+i;k<n;k+=i)
        {
            a[k]=0;
        }
    }
}

void output(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        continue;
        printf("%d\t",a[i]);
    }
}

int main()
{
    int n;
    n=input_n();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
}
*/