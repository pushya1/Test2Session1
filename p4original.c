// 4. Write a program to find nth number in fibonacci sequence.
// Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
// int input();
// int find_fibo(int n);
// void output(int n, int fibo);
#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    int i,a[n];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;++i)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];
}

void output(int n,int fibo)
{
    printf("number %d in Fibonacci sequence is :%d",n,fibo);  
}

int main()
{   
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}