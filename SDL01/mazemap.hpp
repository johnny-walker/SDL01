//
//  mazemap_hpp
//  Created on 2021/12/12.
//

#ifndef mazemap_hpp
#define mazemap_hpp

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class MazeMap{
public:
    // constructor
    MazeMap();
    
    // destructor
    ~MazeMap();
    
    vector<vector<int>> matrix;

    void loadMap(char path[]);  // csv file
    void dumpMap();
};
#endif /* mazemap_hpp */
