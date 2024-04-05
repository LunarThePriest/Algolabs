#include <stdio.h>
#include <stdlib.h>


void swap(char *xp, char *yp) 
{ 
    char temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}


void selectionSort(char result[], int n) 
{ 
    int i, j, min_idx, k; 

    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++){
            if (result[j] < result[min_idx]) 
            min_idx = j; 
        }
        if(min_idx != i) 
            swap(&result[min_idx], &result[i]); 
    }

    for (k = 0; k < n; k++)
    {
        printf("%c", result[k]);
    }
}


int main(){
    char *a, *b, *out, tmp;
    int n, i, j, nn;

    puts("LAB 9. TASK 1");
    puts("\nPlease enter the size of your arrays(only one number for both): ");
    scanf("%i", &n);
    getchar();

    nn = n * 2;
    a = (char *)calloc(n, sizeof(char));
    b = (char*)calloc(n, sizeof(char));
    out = (char*)calloc(nn, sizeof(char));
    if (a == NULL || b == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    puts("Enter elements of first array (sorted): ");
    scanf("%s", a);

    puts("Enter elements of second array (sorted): ");
    scanf("%s", b);

    for (i = 0; i < n; i++){
        out[i] = a[i];
    }

    for (i = i, j = 0; j < nn; j++, i++){
        out[i] = b[j];
    }

    selectionSort(out, nn);
}
