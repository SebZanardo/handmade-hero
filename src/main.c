#include "raylib.h"


#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define WINDOW_CAPTION "Handmade Hero"


int main(void) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_CAPTION);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }

    CloseWindow();
}
