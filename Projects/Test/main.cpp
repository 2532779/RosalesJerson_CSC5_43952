/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on June 9, 2015, 9:21 AM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int row=10;
    int col=10;
    char array[row][col];
    ifstream read;
    read.open("map1.txt");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            read>>array[i][j];
        }
    }
    for(int count=0;count<row;count++){
        for(int r=0;r<col;r++){
            cout<<array[count][r]<<" ";
        }
        cout<<endl;
    }
    read.close();

    return 0;
}

