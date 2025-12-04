#include <stdio.h>
#include "draw.h"

void draw_grid(const Grid* grid) {
    printf("   1 2 3 4 5 6 7 8 9\n");
    for (int r = 0; r < 9; ++r) {
        printf("%d  ", r + 1);
        for (int c = 0; c < 9; ++c) {
            Cell val = grid->tiles[r][c].value;
            if (val == 0)
                printf(". ");
            else
                printf("%d ", val);
        }
        printf("\n");
    }
}