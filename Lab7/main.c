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

    min = array[0][0];
    max = array[0][0];

    puts("\nDone!");
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (array[i][j] < min){
                min = array[i][j];
                minx = i;
                miny = j;
            }
            if (array[i][j] > max){
                max = array[i][j];
                maxx = i;
                maxy = j;
            }
        }
    }

    printf("\nMin: %d at row %i, column %i\nMax: %d at row %i, column %i", min, minx+1, miny+1, max, maxx+1, maxy+1);
}
