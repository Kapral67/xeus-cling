// Kapral, Maxwell
// CSCI 211
// Project 6
// mkapral
// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

Class Circle : public Shape{
    public:
        Circle(int x, int y);
        void draw(Grid &grid);
};
#endif
