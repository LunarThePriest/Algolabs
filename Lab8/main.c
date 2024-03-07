#include <stdio.h>
#include <string.h>

int main()
{
    char txt[30];

    puts("LAB 8. TASK 2: Vyvedennya initsialiv");
    puts("Made by: Koval'chuk Anastasia, KNMS-11");
    puts("\nPlease enter your full name: ");

    gets(txt);
    for (int i = 0; i < strlen(txt); i++)
    {
        if ((int)txt[i] > 64 && (int)txt[i] < 91 || (int)txt[i] > 96 && (int)txt[i] < 123) //letters
        {
            continue;
        }
        else{
            switch ((int)txt[i]){
            case 32: // space
            case 39: //"hyphen(defis)"
            case 45: //"apostrophe"
                continue;
            default:
                puts("Input error. Please try again");
                return (1);
            }
        }
    }

    printf("%s", txt);
}
