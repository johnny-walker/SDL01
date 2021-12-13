
#include "game01.hpp"
#include "mazemap.hpp"

int main( int argc, char* args[] ) {
    //create game window
    Game01 gm01 = Game01(800, 600);
    
    MazeMap map = MazeMap();
    char path[] = "data/map01.csv";
    map.loadMap(path);
    
    //load background image
    bool drawBG  = false;
    if (drawBG) {
        char path[] = "data/tiger.jpg";
        if( !gm01.loadBgTexture(path) ) {
            printf("Warning, failed to load background image!\n" );
        }
    }
    
    // start rendering
    gm01.mainLoop();
    return 0;
}
