#include <stdio.h>
int sum_func(int a,int b);


int main() {
  int a, b,sum;
  printf("Enter the first number");
  scanf("%d", &a);
  printf("Enter second number");
  scanf("%d", &b);
  sum=sum_func(a,b);
  printf("%d", sum);

  return 0;
  }
  int sum_func(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
} 

    