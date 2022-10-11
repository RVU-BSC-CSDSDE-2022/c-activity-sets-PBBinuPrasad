#include <stdio.h>
 sum_func(int a,int b, int*sum);


int main() {
  int a, b,sum;
  printf("Enter the first number");
  scanf("%d", &a);
  printf("Enter second number");
  scanf("%d", &b);
  sum_func(a,b,&sum);
  printf("%d", sum);

  return 0;
  }
 sum_func(int a, int b, int *sum)
{
  
  *sum=a+b;
 // return sum;
} 

    