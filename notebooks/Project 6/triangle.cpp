// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// triangle.cpp

#include <iostream>
#include "triangle.h"
#include "shape.h"
#include "point.h"

Triangle::Triangle(int x, int y) : Shape(x,y){
    m_x = x;
    m_y = y;
}

void Triangle::draw(Grid &grid){
    Point top(m_x, m_y, '+');
    top.draw(grid);
    Point midL((m_x+1), (m_y-1), '+'), midR((m_x+1), (m_y+1), '+');
    midL.draw(grid);
    midR.draw(grid);
    Point bottom[5];
    for(int pt = 0; pt < 5; pt++){
        bottom[pt]((m_x+2), ((m_y-2)+pt), '+');
        bottom[pt].draw(grid);
    } 
}
