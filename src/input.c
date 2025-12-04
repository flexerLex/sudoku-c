#include <stdio.h>
#include "input.h"

// Liest eine Taste von der Konsole und gibt das entsprechende KeyEvent zurück
KeyEvent read_key() {
    int ch = getchar();
    KeyEvent event = {KEY_NONE, 0};

    // Einfache Implementierung für Zahlen und 'q'
    if (ch >= '1' && ch <= '9') {
        event.type = KEY_NUMBER;
        event.value = ch - '0';
    } else if (ch == 'q') {
        event.type = KEY_QUIT;
    } else if (ch == 'w') {
        event.type = KEY_UP;
    } else if (ch == 's') {
        event.type = KEY_DOWN;
    } else if (ch == 'a') {
        event.type = KEY_LEFT;
    } else if (ch == 'd') {
        event.type = KEY_RIGHT;
    } else if (ch == '\b' || ch == 127) {
        event.type = KEY_BACK;
    }
    // Erweiterbar für weitere Tasten

    return event;
}