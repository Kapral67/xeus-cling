// Kapral, Maxwell
// Project 6
// CSCI 211
// mkapral
// circle.cpp

#include <iostream>
#include "circle.h"
#include "shape.h"
#include "grid.h"

Circle::Circle(int x, int y) : Shape(x,y){
    m_x = x;
    m_y = y;
}

void Circle::draw(Grid &grid){
    //set top and bottom pairs respectively
    grid.set((m_x+1), m_y, 'o'); //left
    grid.set((m_x+2), m_y, 'o'); //right
    grid.set((m_x+1), (m_y+3), 'o'); //left
    grid.set((m_x+2), (m_y+3), 'o'); //right
    // set left and right pairs respectively (left to right indiv.)
    grid.set(m_x, (m_y+1), 'o');
    grid.set(m_x, (m_y+2), 'o');
    grid.set((m_x+3), (m_y+1), 'o');
    grid.set((m_x+3), (m_y+2), 'o');
}
