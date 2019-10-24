//
//  Drop.cpp
//  raintest
//
//  Created by Gejin Zhu on 10/24/19.
//

#include "Drop.hpp"
#include "ofMain.h"

void Drop::reset(){
    x = 100;
    y = 100;
    yspeed = 1;

}

void Drop::update(){
    y = y + yspeed;
    
}

void Drop::draw(){
    ofDrawLine(x, y, x, y+10);


    
}
