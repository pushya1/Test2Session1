// while runing the program with console use "gcc p1original.c -lm -o p1original"
#include <stdio.h>
#include <math.h>
void input(int *x1,int *y1,int *x2,int *y2)
{
  printf("enter the two ponts:\n");
  scanf("%d%d%d%d",x1,y1,x2,y2);
}
void find_distance(int x1,int y1,int x2,int y2,float *area)
{
 *area=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
 
}
void output(float *area)
{
  printf("%f",*area);
}
int main()
{
  int x1,y1,x2,y2;
  float area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(&area);
}
