// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// triangle.cpp

#include <iostream>
#include "triangle.h"
#include "shape.h"

Triangle::Triangle(int x, int y) : Shape(x,y){
    m_x = x;
    m_y = y;
}

void Triangle::draw(Grid &grid){
    //set top point
    grid.set(m_x, m_y, '+');
    //set middle left and mid. r. respectively
    grid.set((m_x-1), (m_y+1), '+');
    grid.set((m_x+1), (m_y+1), '+');
    //set bottom pts.
    for(int pt = 0; pt < 5; pt++)
        grid.set(((m_x-2)+pt), (m_y+2), '+');
}
