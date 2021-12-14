//
//  game01.cpp
//  Created on 2021/12/12.
//

#include "game01.hpp"

Game01::Game01(int width, int height):
MainWin(width, height),
player(NULL){
    loadData();
}

Game01::~Game01() {
    delete player;
}

void Game01::loadData() {
    // load player texture
    player = new Player(this);
    if (player) {
        char path[] = "data/mouse.png";
        bool ret = player->loadTexture(path);
        if (!ret) {
            printf("Failed to load player texture\n");
        }
    }
    //ToDo, load other textures
}

//custom the rendering
void Game01::onRender() {
    //draw player
    SDL_Rect dstRect;
    dstRect.x = nBorder + viewWidth/2  - 50;
    dstRect.y = nBorder + viewHeight/2 - 50;
    dstRect.w = 100;
    dstRect.h = 100;
    player->renderTexture(&dstRect, playerAngle);
    
    //ToDo, draw others
}

void Game01::onKeyDown() {
    playerAngle = 0.f;
}

void Game01::onKeyUp(){
    playerAngle =  180.f;
}

void Game01::onKeyLeft(){
    playerAngle =  90.f;
}

void Game01::onKeyRight(){
    playerAngle =  -90.f;
}
