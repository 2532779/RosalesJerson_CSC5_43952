/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 13, 2015, 9:56 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char board_array[10][10];
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            board_array[i][j] = '0';
        }  
    }
    
    cout<<"  A B C D E F G H I J"<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<" ";
        for(int j=0;j<10;j++){
            cout<<board_array[i][j]<<" ";       
        }
        cout<<"\n";
    }
    
    char letter;
    int number;
    cout<<"Input the letter coordinate"<<endl;
    cout<<"ENTER:";
    cin>>letter;
    
    cout<<"input the number coordinate"<<endl;
    cout<<"ENTER:";
    cin>>number;
    
    int col = (letter-65);
    int row = number;
    
    cout<<"Column "<<col<<endl;
    cout<<"Row "<<row<<endl;
    
    board_array[row][col] = 'X';
    cout<<"  A B C D E F G H I J"<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<" ";
        for(int j=0;j<10;j++){
            cout<<board_array[i][j]<<" ";       
        }
        cout<<"\n";
    }
    
    return 0;
}