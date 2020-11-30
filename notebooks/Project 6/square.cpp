// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// sqaure.cpp

#include <iostream>
#include "square.h"

Square::Square(int x, int y, int size){
    m_x = x;
    m_y = y;
    m_size = size;
}

Square::void draw(Grid &grid){
    for(int startX = m_x, count = 0; startX <= (m_x+size); startX++){
        for(int startY = m_y; startY <= (m_y+size); startY++){
            if(count == 0 || count == (m_y+size)){
                grid.set(startX, startY, '*');
            }else{
                grid.set(startX, m_y, '*');
                grid.set(startX, m_y+size, '*');
            }
        }
        count++;
    }
}
