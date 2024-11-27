#include <stdio.h>

// Define an enumeration for color names
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    WHITE,
    BLACK
} Color;

int main() {
    // Example input
    Color selectedColor = BLUE;

    // Use a switch statement to display the hexadecimal code
    switch (selectedColor) {
        case RED:
            printf("Hexadecimal color code for RED: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal color code for GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal color code for BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal color code for YELLOW: #FFFF00\n");
            break;
        case ORANGE:
            printf("Hexadecimal color code for ORANGE: #FFA500\n");
            break;
        case PURPLE:
            printf("Hexadecimal color code for PURPLE: #800080\n");
            break;
        case WHITE:
            printf("Hexadecimal color code for WHITE: #FFFFFF\n");
            break;
        case BLACK:
            printf("Hexadecimal color code for BLACK: #000000\n");
            break;
        default:
            printf("Unknown color!\n");
            break;
    }

    return 0;
}