#include "grid.h"
#include <iostream>
using namespace std;

Grid::Grid(){
    for(int col = 0; col < COLS; col++){
    	for(int row = 0; row < ROWS; row++){
            m_grid[col][row] = ' ';
        }
    }
}

Grid::set

void draw(Grid &grid){
    grid.set(0,0,'+');
    grid.set(59,23,'*');
}

int main(){
  cerr << "Redirect the standard output to a file and make sure the output is\n"
       << "24 lines x 60 cols with a '+' in upper left & a '*' in lower right\n";
  Grid g;

  draw(g);

  g.print();
  
}
