#ifndef INPUT_H
#define INPUT_H

// Struktur für den Cursor (Position auf dem Spielfeld)
typedef struct {
    int row; // Zeile (0–8)
    int col; // Spalte (0–8)
} Cursor;

// Aufzählungstyp für Tasteneingaben
typedef enum {
    KEY_NONE,
    KEY_UP,
    KEY_DOWN,
    KEY_LEFT,
    KEY_RIGHT,
    KEY_ENTER,
    KEY_BACK,
    KEY_NUMBER, // einzelne Ziffer
    KEY_QUIT
} KeyType;

// Struktur für ein Tastenevent
typedef struct {
    KeyType type;
    int value; // falls KEY_NUMBER: 1–9
} KeyEvent;

// Funktion zum Lesen einer Taste
KeyEvent read_key();

#endif // INPUT_H