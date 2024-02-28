#include <stdio.h> 

int main(){
    int x, y, min, max, miny, minx, maxx, maxy;
    puts("LAB 7. TASK 8");
    puts("Enter the number of rows and columns in your 2D array:");
    scanf("%d %d", &x, &y);
    int array[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value for row %i, column %i:", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    puts("Done! Your array:");
    for (int i = 0; i < x; i++)
    {
        printf("\nROW %i", i);
        for (int j = 0; j < y; j++)
        {
            printf("\nPosition %i: %d", j, array[i][j]);
        }
    }
}

int inp(){

}
