#include <stdio.h>
void change(int *x , int *y);

int main() {
  int x,y;
  x= 200 , y= 300;
  change(&x , &y);
  printf("x is %d y is %d",x,y);

  return 0;
  
}


void change(int *x , int *y)
{
  *x= 400;
  *y= 700;

}