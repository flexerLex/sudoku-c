#ifndef GRID_H
#define GRID_H

#include <stdint.h>
#include <stdbool.h>

// 0 = leer, 1–9 = Value
//Definieren Sie den Zellentyp als 8-Bit-Integer
typedef uint8_t Cell;

typedef struct {
    // Wert des Feldes (0 = leer, 1–9 = Zahl)
    Cell value;
    // true, wenn das Feld fest vorgegeben ist (nicht änderbar)
    bool fixed;
} Tile;

typedef struct {
    Tile tiles[9][9];
} Grid;

//(setzt alle Zellen auf Null)
void grid_init(Grid* grid);

#endif // GRID_H