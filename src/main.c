#include <stdio.h>
#include "grid.h"
#include "draw.h"

int main(void) {
    printf("Hello Sudoku!\n");
    Grid grid;
    grid_init(&grid);

    printf("Sudoku grid initialized!\n");
    return 0;
}