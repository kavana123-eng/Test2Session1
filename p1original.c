#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter The Points \n");
  Scanf(""%f%f%f%f",x1,x2,y1,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  *distance=sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  printf("the distance between the points (%f,%f) and (%f,%f) is %f \n ",x1,y1,x2,y2,distance);
}
int main()
{
 float x1,y1.x2,y2,d;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&d);
  output(x1,y1,x2,y2,d);
  return 0;
}

