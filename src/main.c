#include <stdio.h>
#include "grid.h"
#include "draw.h"
#include "input.h"

int main(void) {
    printf("Hello Sudoku!\n");
    Grid grid;
    grid_init(&grid);

    Cursor cursor = {0, 0}; // Startposition des Cursors

    printf("Sudoku grid initialized!\n");

    while (1) {
        draw_grid(&grid);
        printf("Cursor: (%d, %d)\n", cursor.row + 1, cursor.col + 1);

        KeyEvent key = read_key();

        if (key.type == KEY_QUIT) {
            break;
        } else if (key.type == KEY_UP && cursor.row > 0) {
            cursor.row--;
        } else if (key.type == KEY_DOWN && cursor.row < 8) {
            cursor.row++;
        } else if (key.type == KEY_LEFT && cursor.col > 0) {
            cursor.col--;
        } else if (key.type == KEY_RIGHT && cursor.col < 8) {
            cursor.col++;
        }
        // Weitere Logik für Zahlen und Löschen folgt später
    }

    return 0;
}