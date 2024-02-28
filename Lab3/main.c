#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, d, e;
  puts("LAB 3. TASK 15");
  for(;;){
      printf("\nEnter five numbers (with whitespaces):");
      scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
      printf("\nHere's the average of these numbers: %d. \nPress Ctrl+C to exit.", (int)roundf((a + b + c + d + e) / 5));  
  }
  return 0;
}
