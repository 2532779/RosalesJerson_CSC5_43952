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
#include <fstream>

using namespace std;

//User Libraries

//Global Constants
const int row=10;//Number of rows
const int col=10;//Number of columns
const int numships=5;//NUmber of Battleships
char board[row][col];//The board Variable

//Function Prototypes
void clear();//Board
int numShip();//Number of ships function
void spnShip();//Spawning the Ships
bool aslt(int,int);//The Assault on the ships
void visual();//Visual To help determine coordinates
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    int pos1,pos2;//Entering position of ships
    char input;//Input for surrendering
    srand(time(0));//Setting time
    clear();//Setting board
    spnShip();//Spawning Ships
    out.open("NumOfShip.doc");//Opening file
    do
        {
                cout<<"Please input location:"<<endl;
                visual();//Visual to see the board easier
                cout<<"Enter x coordinate..."<<endl;
                cin>>pos1;
                while(pos1<=0||pos1>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos1;
                }
                cout<<"Enter y coordinate..."<<endl;
                cin>>pos2;  
                while(pos2<=0||pos2>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos2;
                }
                if(aslt(pos1,pos2))//Assaulting the ship
                        cout<<"Hit!"<<endl;
                else
                        cout<<"Miss!"<<endl;
                cout<<"Number of ships left: "<<numShip()<<endl;
                //Putting number of ships to a file
                out<<"The Number of ships lefts are.."<<numShip()<<endl;
                //-----------------------------------------
                cout<<"Do you want to surrender (y/n)? "<<endl;
                if(numShip()!=0){
                    cin>>input; 
                    while (input!='y'&&input!='n'){
                        cout<<"You must enter lower case y or n"<<endl;
                        cin>>input;
                    }
                }
                else if (numShip()==0){
                    cout<<"Enter y to quit"<<endl;
                    cin>>input;
                    while (input!='y'){
                        cout<<"You must enter lower case y"<<endl;
                        cin>>input;
                    }
                }
        }while(input!='y');
    out.close();//Closing file
        cout<<"Game over!"<<endl;
    return 0;

}

void clear (){
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            board [i][j]=0;
        }
    }
}


int numShip(){
    int c = 0;
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        if(board[i][j]==1)
                                c++;
                }
        }
        return c;
}

void spnShip(){
    int s = 0;
        while(s < numships)
        {
                int x=rand()%row;
                int y=rand()%col;
                if(board[x][y]!= 1)
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
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            board[row][col]='0';
        }
    }
    cout<<"   1 2 3 4 5 6 7 8 9 10"<<endl;
    for (int i=0;i<=row;i++){
        cout<<i<<"  ";
        for(int j=0;j<10;j++){
            cout<<board[row][col]<<setw(2);    
        }
        cout<<"\n";
    }
}

