﻿#include "Game.h"
#include "raylib.h"
#include "Settings.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------


    Game game{ settings::screenWidth,settings::screenHeight,"Tetris" };

    while (!game.GameShouldClose())
    {
        game.Tick();

    }
    
    return 0;
}
