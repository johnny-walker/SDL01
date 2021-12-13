//
//  game01.hpp
//  Created on 2021/12/12.
//

#ifndef game01_hpp
#define game01_hpp

#include <stdio.h>
#include "mainwin.hpp"
#include "player.hpp"
#include "ghost.hpp"

class Game01: public MainWin {
public:
    // constructor
    Game01(int width=SCREEN_WIDTH, int height=SCREEN_HEIGHT);
    
    // destructor
    ~Game01();

    Player* player;
    double playerAngle = 0.f;

private:
    void loadData();
    void onRender();
    void onKeyDown();
    void onKeyUp();
    void onKeyLeft();
    void onKeyRight();
};

#endif /* game01_hpp */
