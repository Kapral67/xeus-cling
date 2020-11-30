// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// point.h

#ifndef POINT_H
#define POINT_H

#include "shape.h"

class Point: public Shape {
    public:
        Point(int x, int y, char c);
        void draw(Grid &grid);
    private:
        char m_symbol;
};
#endif
