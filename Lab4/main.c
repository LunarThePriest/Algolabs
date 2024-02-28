#include <stdio.h>

int main(){
    int n;
    puts("LAB 4. TASK 8");
    puts("Please enter number of a day of the week:");
    scanf("%d", &n);
    switch(n){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            puts("\nРобочий день");
            break;
        case 6:
            puts("\nРобочий день");
            break;
        case 7:
            puts("\nВихідний");
            break;
        default:
            puts("\nThe number you entered is not a week day number.");
            break;
        }
    return 0;
}
