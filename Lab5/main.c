#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int out[12], n, i;
    puts("LAB 5. TASK 9");
    puts("\nEnter a decimal number:");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        out[i] = n%2;
        n = n / 2;
    }
    printf("\nYour number as a binary number: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", out[i]);
    }
    return 0;
}
