//
//  player.cpp
//  Created on 2021/12/12.
//

#include "player.hpp"
Player::Player(MainWin* handle):
hWin(handle){
    
}

// destructor
Player::~Player(){
    hWin = NULL;
    pTexture = NULL;
}

bool Player::loadTexture(char path[]) {
    pTexture = hWin->loadTexture(path);
    return pTexture == NULL ? false: true;
}

void Player::renderTexture(SDL_Rect* dstRect, double angle){
    if (hWin) {
        hWin->renderTexture(pTexture, dstRect, angle);
    }
}
