// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// square.h

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape {
    public:
        Square(int x, int y, int size);
        void draw(Grid &grid);
    private:
        int m_size;
};
#endif
