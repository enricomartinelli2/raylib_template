

/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include <cstdlib>
#include <ctime>
#include "raylib.h"

int main(void) {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    bool pregame = true;
    bool gioco = false;
    bool scelta = false;
    int x;
    srand(time(NULL));


    InitWindow(screenWidth, screenHeight, "choose your album");
    Texture2D sfondo = LoadTexture(("../assets/sfondo-music.png"));
    Texture2D durk1 = LoadTexture(("../assets/lildurk.png"));
    Texture2D tjay2 = LoadTexture(("../assets/222.png"));
    Texture2D astro3 = LoadTexture(("../assets/astro.png"));
    Texture2D posty4 = LoadTexture(("../assets/AUSTIN.png"));
    Texture2D thgugger5 = LoadTexture(("../assets/bib.png"));
    Texture2D caps6 = LoadTexture(("../assets/caps.png"));
    Texture2D damn7 = LoadTexture(("../assets/DAMN.png"));
    Texture2D handv8 = LoadTexture(("../assets/handv.png"));
    Texture2D herloss9 = LoadTexture(("../assets/herloss.png"));
    Texture2D iamiwas10 = LoadTexture(("../assets/iamiwas.png"));
    Texture2D kendrick11 = LoadTexture(("../assets/kendrick.png"));
    Texture2D llv12 = LoadTexture(("../assets/llv.png"));
    Texture2D lovesick13 = LoadTexture(("../assets/lovesick.png"));
    Texture2D pinktape14 = LoadTexture(("../assets/pinktape.png"));
    Texture2D rodeo15 = LoadTexture(("../assets/rodeo.png"));
    Texture2D savagemode16 = LoadTexture(("../assets/savagemode.png"));
    Texture2D spidey17 = LoadTexture(("../assets/spidey.png"));
    Texture2D UTOPIAA18 = LoadTexture(("../assets/UTOPIA.png"));
    Texture2D warning19 = LoadTexture(("../assets/warning.png"));
    Texture2D wunna20 = LoadTexture(("../assets/wunna.png"));
    Music iknow = LoadMusicStream(("../assets/iknow.ogg"));



    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();


        if (pregame) {
            ClearBackground(RAYWHITE);
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawText("WICH ALBUM DO YOU PICK?", 190, 180, 30, WHITE);
            DrawText("press space to start", 290, 210, 20, WHITE);
            if (IsKeyDown(KEY_SPACE)) {
                gioco = true;
                pregame = false;
            }
        }
        if (gioco) {
            x = rand()%(20-1+1)+1;
        }
            if(x==1) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(durk1, 290, 100, WHITE);
                DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
                DrawText("X - yes", 180, 360, 30, WHITE);
                DrawText("Y - no", 500, 360, 30, WHITE);
                gioco = false;
                if (IsKeyDown(KEY_X)) {
                    scelta = true;
                }
                if (scelta) {
                    DrawTexture(sfondo, -20, -200, WHITE);
                    DrawTexture(durk1, 290, 100, WHITE);
                    DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

                }
                else if(IsKeyDown(KEY_Y)){
                    gioco = true;
                }
            }
            if(x==2) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(tjay2, 290, 100, WHITE);
                DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
                DrawText("X - yes", 180, 360, 30, WHITE);
                DrawText("Y - no", 500, 360, 30, WHITE);
                gioco = false;
                if (IsKeyDown(KEY_X)) {
                    scelta = true;
                }
                if (scelta) {
                    DrawTexture(sfondo, -20, -200, WHITE);
                    DrawTexture(tjay2, 290, 100, WHITE);
                    DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

                }
                else if(IsKeyDown(KEY_Y)){
                    gioco = true;
                }

            }
        if(x==3) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(astro3, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(astro3, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==4) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(posty4, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(posty4, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==5) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(thgugger5, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(thgugger5, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==6) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(caps6, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(damn7, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==7) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(damn7, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(damn7, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==8) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(handv8, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(handv8, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==9) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(herloss9, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(herloss9, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==10) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(iamiwas10, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(iamiwas10, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==11) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(kendrick11, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(kendrick11, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==12) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(llv12, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(llv12, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==13) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(lovesick13, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(lovesick13, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==14) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(pinktape14, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(pinktape14, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==15) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(rodeo15, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(rodeo15, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==16) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(savagemode16, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(savagemode16, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==17) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(spidey17, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(spidey17, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==18) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(UTOPIAA18, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(UTOPIAA18, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);
                PlayMusicStream(iknow);
            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==19) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(warning19, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(warning19, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }
        if(x==20) {
            DrawTexture(sfondo, -20, -200, WHITE);
            DrawTexture(wunna20, 290, 100, WHITE);
            DrawText("Do You Confirm Your Choice?", 180, 55, 30, WHITE);
            DrawText("X - yes", 180, 360, 30, WHITE);
            DrawText("Y - no", 500, 360, 30, WHITE);
            gioco = false;
            if (IsKeyDown(KEY_X)) {
                scelta = true;
            }
            if (scelta) {
                DrawTexture(sfondo, -20, -200, WHITE);
                DrawTexture(wunna20, 290, 100, WHITE);
                DrawText("Good Choice! Have A Good Listen", 180, 55, 30, WHITE);

            }
            else if(IsKeyDown(KEY_Y)){
                gioco = true;
            }
        }





            EndDrawing();
            //----------------------------------------------------------------------------------
        }


        // De-Initialization
        //--------------------------------------------------------------------------------------
        CloseWindow();        // Close window and OpenGL context
        //--------------------------------------------------------------------------------------

        return 0;
    }

