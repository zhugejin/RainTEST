//
//  Drop.hpp
//  raintest
//
//  Created by Gejin Zhu on 10/24/19.
//

#ifndef Drop_hpp
#define Drop_hpp

#include <stdio.h>

#endif /* Drop_hpp */

class Drop {
public:
    float x;
    float y;
    float yspeed;
    
    void reset();
    void update();
    void fall();
    void draw();
    void dealloc();
};
