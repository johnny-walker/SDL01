//
//  player.hpp
//  Created on 2021/12/12.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "mainwin.hpp"

class Player{
public:
    // constructor
    Player(MainWin* handle);
    
    // destructor
    ~Player();

    MainWin* hWin = NULL;
    SDL_Texture* pTexture = NULL;

    bool loadTexture(char path[]);
    void renderTexture(SDL_Rect* dstRect, double angle);

};
#endif /* player_hpp */
