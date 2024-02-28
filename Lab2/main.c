#include <stdio.h>

int main(int argc, char *argv[])
{
  int a;
  int h;
  puts("LAB 1, TASK 4");
  printf("\nLength of the triangle side:");
  scanf("%d", &a);
  printf("\nIts height:");
  scanf("%d", &h);
  printf("The area of the triangle is: %d", a*h/2);
  system("PAUSE");	
  return 0;
}
