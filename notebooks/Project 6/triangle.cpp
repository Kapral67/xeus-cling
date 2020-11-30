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
    grid.set(m_x, m_y, '+');
    grid.set((m_x+1), (m_y-1), '+');
    grid.set((m_x+1), (m_y+1), '+');
    for(int pt = 0; pt < 5; pt++)
        grid.set((m_x+2), ((m_y-2)+pt), '+');
}
