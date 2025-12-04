#include "grid.h"

void grid_init(Grid* grid) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            grid->tiles[i][j].value = 0;
            grid->tiles[i][j].fixed = false;
        }
    }
}