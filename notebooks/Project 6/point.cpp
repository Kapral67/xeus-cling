// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// point.cpp

#include <iostream>
#include "point.h"
#include "shape.h"

Point::Point(int x, int y, char c) : Shape(x,y){
    m_x = x;
    m_y = y;
    m_symbol = c;
}

void Point::draw(Grid &grid){
    grid.set(m_x, m_y, m_symbol);
}
