// 7. Write a program to find the length of a line.
// struct _point {
// float x,y;
// };
// typedef struct _point Point;
// struct _line
// {
// Point p1,p2;
// float distance;
// };
// typedef struct _line Line
// Point input_point();
// Line input_line();
// void find_length(Line *l);
// void output(Line l);
#include <stdio.h>
#include <math.h>
typedef struct _point {
float x,y;
}Point;

typedef  struct _line{
Point p1,p2;
float distance;
}Line;

Point input_point()
{
  Point p;
  printf("Enter the first point(x,y):\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line(Point p1,Point p2)
{  
  Line l;
  l.p1=p1;
  l.p2=p2;
  return l;
  
}
void find_length(Line *l)
{
  l->distance=sqrt((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x)+(l->p2.y-l->p1.y)*(l->p2.y-l->p1.y));
}
void output(Line l)
{
  printf("The length of the line is %f",l.distance);
}
int main()
{
  Point p1,p2;
  Line l;
  p1=input_point();
  p2=input_point();
  l=input_line(p1,p2);
  find_length(&l);
  output(l);
  return 0;
}
