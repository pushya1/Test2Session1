#include <stdio.h>
#include <math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the two ponts:\n");
  scanf("%d%d%d%d",x1,y1,x2,y2);
}
void find_distance(int x1,int y1,int x2,int y2,float *mr)
{
  int r;
  r=((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
  *mr=sqrt(r);
}
void output(int *mr)
{
  printf("%f",*mr);
}
int main()
{
  int x1,y1,x2,y2;
  float mr;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1, y1,x2,y2,&mr);
  output(&mr);
}