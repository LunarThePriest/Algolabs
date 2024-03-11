#include <stdio.h>
#include <string.h>

int main() {
    char txt[30];
    char initials[10];
    int j = 2;

    puts("LAB 8. TASK 2: Vyvedennya initsialiv za dopomohoyu funktsiy biblioteky <string.h>");
    puts("Made by: Koval'chuk Anastasia, KNMS-11");
    puts("\nPlease enter your full name: ");

    fgets(txt, sizeof(txt), stdin);

    for (int i = 0; i < strlen(txt)-1; i++){
        if (isalpha(txt[i]))
            continue;
        else{
            switch ((int)txt[i]){
            case 32: // space
                initials[j] = txt[i + 1];
                initials[j + 1] = '.';
                j += 2;
                continue;
            case 39: //"hyphen(defis)"
            case 45: //"apostrophe"
                continue;
            default:
                printf("Input error at character %c (number %d). Please try again", txt[i], i);
                return (1);
            }
        }
    }

    initials[0] = txt[0];
    initials[1] = '.';

    printf("Initials: %s\n", initials);

    return 0;
}
