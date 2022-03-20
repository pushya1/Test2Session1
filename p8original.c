// 8. Write a program to find the permeter of a polygon
// struct _point {
// float x,y;
// };

// typedef struct _point Point;
// struct _line
// {
// Point p1,p2;
// float distance;
// };
// struct _line Line;

// struct _polygon {
// int n;
// Line l[100];
// float perimenter;
// }

// int input_n();
// int input_polygon( int n, Polygon *p);
// Line input_line();
// void input_n_lines(int n, Line l[n]);
// void find_perimeter(Polygon *p);
// void output(Polygon p);
#include <stdio.h>
#include <math.h>
typedef struct _point{
    float x,y;
}Point;

typedef struct _line{
    Point p1,p2;
    float distance;
}Line;

typedef struct _polygon{
    int n;
    Line l[100];
    float perimenter;
}Polygon;

int input_n()
{
    int n;
    printf("Enter the no of sides of Polygon:\n");
    scanf("%d",&n);
    return n;
}

int input_polygon( int n, Polygon *p){
   p->n=n;
}

Line input_line(){
    Line l;
    printf("Enter the (x,y) of one end:\n");
    scanf("%f%f",&l.p1.x,&l.p1.y);
    printf("Enter the (x,y) of second end :\n");
    scanf("%f%f",&l.p2.x,&l.p2.y);
    l.distance=sqrt((l.p2.x-l.p1.x)*(l.p2.x-l.p1.x)+(l.p2.y-l.p1.y)*(l.p2.y-l.p1.y));
    return l;
}
void input_n_lines(int n, Line l[n]){
    for(int i=0;i<n;i++)
    {
        l[i]=input_line();
    }
    
}

void find_perimeter(Polygon *p,int n,Line l[n]){
    p->perimenter=0;
    for(int i=0;i<p->n;i++)
    {
        p->perimenter=p->perimenter+l[i].distance;
    }
    
}
void output(Polygon p)
 {
     printf("the perimenter of the Polygon is %f",p.perimenter);
}
int main()
{
    int n;
    Polygon p;
    n=input_n();
    Line l[n];
    input_polygon(n,&p);
    input_n_lines(n,l);
    find_perimeter(&p,n,l);
    output(p);
    return 0;
}