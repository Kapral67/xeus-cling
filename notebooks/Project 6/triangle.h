// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle: public Shape{
    public:
        Triangle(int x, int y);
        void draw(Grid &grid);
};
#endif
