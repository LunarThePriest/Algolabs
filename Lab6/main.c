#include <stdio.h>

float inpt_num();
int inpt_way();
int outpt(float result, int inputCorrect, char *currency);

int main(){
    const float toUAH = 41.44;
    const float toEuro = 0.024;
    float result;
    float amount = inpt_num();
    int way = inpt_way();
    
    if (way == 1){
        result = amount * toUAH;
        outpt(result, 1, "UAH");
    }
    else if (way == 2){
        result = amount * toEuro;
        outpt(result, 1, "euro");
    }
}

float inpt_num(){
    float a;
    puts("Enter the amount you wish to convert:");
    scanf("%f", &a);
    if (__builtin_types_compatible_p (typeof (a), float))
        return (a);
    else
        outpt(0.0, 0, "0");
    return (0);
}

int inpt_way(){
    int way;
    puts("Enter '1' if it's euro to hryvnia and '2' if it's hryvnia to euro:");
    scanf("%i", &way);
    if (way != 1 && way != 2)
        outpt(0.0, 0, "0");
    else
        return (way);
}

int outpt(float result, int inputCorrect, char *currency)
{
    if (inputCorrect == 1)
        printf("Your result: %f %s", result, currency);
    else
        puts("Sorry, you might have entered something wrong.");
    return 0;
}
