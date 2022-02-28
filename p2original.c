// 2. Write a program to find whether the three points form a triangle.

#include <stdio.h>
void input(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the first point co-ordinates:\n");
    scanf("%f%f",x1,y1);
    printf("Enter the second point co-ordinates:\n");
    scanf("%f%f",x2,y2);
    printf("Enter the last point co-ordinates:\n");
    scanf("%f%f",x3,y3);
}

float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float a = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return a;
}

void output(float a)
{
    if(a==0)
    {
        printf("Triangle can't  form\n");
    }
    else
    {
        printf("Triangle can form with given points\n");
    }
}

int  main()
{
    float x1,x2,x3,y1,y2,y3,a;
    input(&x1,&y1,&x2,&y2,&x3,&y3);
    a=is_triangle(x1,y1,x2,y2,x3,y3);
    output(a);
    return 0;
}