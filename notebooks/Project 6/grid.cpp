#include "grid.h"
#include <iostream>
using namespace std;

Grid::Grid(){
    for(int row = 0; row < ROWS; row++){
        for(int col = 0; col < COLS; col++){
            m_grid[row][col] = ' ';
        }
    }
}

void Grid::set(int x, int y, char c){
    if(x < ROWS && y < COLS)
        m_grid[x][y] = c;
}

void Grid::print(){
    for(int row = 0; row < ROWS; row++){
        for(int col = 0; col < COLS; col++){
            cout << m_grid[row][col];
        }
        cout << endl;
    }
}
