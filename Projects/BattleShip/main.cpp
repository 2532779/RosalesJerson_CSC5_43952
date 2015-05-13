/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 4, 2015, 2:04 PM
 * Purpose: BattleShip Game
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const int row=10;
const int col=10;
const int numships=5;
char board[row][col];

//Function Prototypes
void clear();
void show();
int numShip();
void spnShip();
bool aslt(int,int);
void visual();
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int pos1,pos2;
    char input;
    srand(time(0));
    clear();
    spnShip();
    while(input!='y'&&input!='Y')
        {
                cout<<"Please input location:"<<endl;
                visual();
                cin>>pos1>>pos2;
                if(aslt(pos1,pos2))
                        cout<<"Hit!"<<endl;
                else
                        cout<<"Miss!"<<endl;
                cout<<"Number of ships left: "<<numShip()<<endl;
                cout<<"Do you want to surrender (y/n)? "<<endl;
                cin>>input;
                       
        }
        cout<<"Game over!"<<endl;
        show();
    

    return 0;

}

void clear (){
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            board [i][j]=0;
        }
    }
}

void show (){
    for(int i=0; i < row; i++)
        {
                for(int j=0; j<col;j++)
                {
                        cout << board[i][j] << " ";
                }
                cout << endl;
        }
}

int numShip(){
    int c = 0;
        for(int i=0; i < row; i++)
        {
                for(int j=0; j<col; j++)
                {
                        if(board[i][j] == 1)
                                c++;
                }
        }
 
        return c;
}

void spnShip(){
    int s = 0;
        while(s < numships)
        {
                int x = rand() % row;
                int y = rand() % col;
                if(board[x][y] != 1)
                {
                        s++;
                        board[x][y] = 1;
                }
        }
}

bool aslt( int x,int y){
    if(board[x][y] == 1)
        {
                board[x][y] = 2;
                return true;
        }
        return false;
}

void visual(){
    for (int i=0;i<=10;i++){
        for(int j=0;j<10;j++){
            board[row][col]='0';
        }
    }
    cout<<"   A B C D E F G H I J"<<endl;
    for (int i=1;i<=row;i++){
        cout<<i<<"  ";
        for(int j=0;j<10;j++){
            cout<<board[row][col]<<" ";
        }
        cout<<"\n";
    }
    
    
}

