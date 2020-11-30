// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// square.cpp

#include <iostream>
#include "square.h"
#include "shape.h"

Square::Square(int x, int y, int size) : Shape(x,y){
    m_x = x;
    m_y = y;
    m_size = size;
}

void Square::draw(Grid &grid){
    for(int startX = m_x, count = 0; startX < (m_x+m_size); startX++){
        for(int startY = m_y; startY < (m_y+m_size); startY++){
            if(count == 0 || count == m_size-1){
                grid.set(startX, startY, '*');
            }else{
                grid.set(startX, m_y, '*');
                grid.set(startX, m_y+m_size-1, '*');
            }
        }
        count++;
    }
}
