/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 13, 2015, 9:56 AM
 */

#include <cstdlib>
#include <iostream>
const int row=10;
const int col=10;
void initializeBoard( char[][col], int);//Fills board with 0's
using namespace std;


int main(int argc, char** argv) {
    char board[row][col] = {'0'};
    initializeBoard(board,row);
    
    
    return 0;
}

void initializeBoard( char array[][col], int r){
     for (int i=0;i<r;i++){
        for(int j=0;j<col;j++){
                array[i][j]='0';
        }
    }
      for (int i=0;i<r;i++){
        for(int j=0;j<col;j++){
                cout << array[i][j];
        }
        cout << endl;
    }
    
   // cout << array[0][0] << endl;
}