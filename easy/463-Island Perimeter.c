#include"stdio.h"

int islandPerimeter(int **grid, int gridRowSize, int gridColSize);
int main(void){

    return 0;
}

int islandPerimeter(int **grid, int gridRowSize, int gridColSize){
    int Row, Col;
    int result = 0;
    for (Row = 0; Row < gridRowSize; Row++){
        for (Col = 0; Col < gridColSize; Col++){
            if (grid[Row][Col] == 1){
                if (Row == 0){
                    result++;
                }else if (grid[Row-1][Col] == 0){
                    result++;
                }
                if (Row == gridRowSize - 1){
                    result++;
                }else if (grid[Row+1][Col] == 0){
                    result++;
                }
                if (Col == 0){
                    result++;
                }else if (grid[Row][Col-1] == 0){
                    result++;
                }
                if (Col == gridColSize - 1){
                    result++;
                }else if (grid[Row][Col+1] == 0){
                    result++;
                }
            }
        }
    }
    return result;
}
