 
 /* File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 4, 2015, 2:04 PM
 * Purpose: BattleShip Game
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants
const int col=10;
//Function Prototypes
int numShip(const char [][col],const int &);//Number of ships function
void spnShip(char [][col],int);//Spawning the Ships
bool aslt(char [][col],int,int,int);//The Assault on the ships
void visual(char [][col],int);//Visual To help determine coordinates
void initializeBoard(char [][col],int);//Fills board with 0's
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    const int row=10;
    char board[row][col];
    int pos1;//Entering position of ships
    char input,pos2,level;//Input for surrendering&&coordinate
    srand(time(0));//Setting time
    cout<<"Welcome to Battleship!"<<endl;
    cout<<"Please Enter the difficulty you wish to challenge!(E,M,H,P)"<<endl;
    cout<<"E-Easy"<<endl;
    cout<<"M-Medium"<<endl;
    cout<<"H-Hard"<<endl;
    cout<<"P-Professional"<<endl;
    cin>>level;
    initializeBoard(board,row);//Getting the board to fill with zeros
    spnShip(board,row);//Spawning Ships
    switch(toupper(level)){
        case 'E':{
            int x=1;
            do
            {
                visual(board,row);
                cout<<"Enter the letter coordinate..."<<endl;
                cin>>pos2;
                int colmns=(toupper(pos2)-65);
                cout<<"Enter the number coordinate..."<<endl;
                cin>>pos1;
                while(pos1<0||pos1>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos1;
                }
                
                if(aslt(board,row,pos1,colmns)){//Assaulting the ship
                        cout<<"Hit!"<<endl;
                }
                else{
                        cout<<"Miss!"<<endl;
                }
                cout<<"Number of spots left: "<<numShip(board,row)<<endl;
                if(numShip(board,row)!=0){
                    cout<<"Do you want to surrender (y/n)? "<<endl;
                    cin>>input;
                    while (input!='Y'&&input!='N'){
                        cout<<"You must Y or N"<<endl;
                        cin>>input;
                    }
                }
                else if (numShip(board,row)==0){
                    cout<<"Enter Y to quit"<<endl;
                    cin>>input;
                    while (input!='Y'){
                        cout<<"You must enter Y"<<endl;
                        cin>>input;
                    }
                }
                x++;
                }while(x<=50&&input!='Y');
                break;
        }
        case 'M':{
            int x=1;
            do
            {
                visual(board,row);
                cout<<"Enter the letter coordinate..."<<endl;
                cin>>pos2;
                int colmns=(toupper(pos2)-65);
                cout<<"Enter the number coordinate..."<<endl;
                cin>>pos1;
                while(pos1<0||pos1>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos1;
                }
                
                if(aslt(board,row,pos1,colmns)){//Assaulting the ship
                        cout<<"Hit!"<<endl;
                }
                else{
                        cout<<"Miss!"<<endl;
                }
                cout<<"Number of spots left: "<<numShip(board,row)<<endl;
                if(numShip(board,row)!=0){
                    cout<<"Do you want to surrender (y/n)? "<<endl;
                    cin>>input;
                    while (input!='Y'&&input!='N'){
                        cout<<"You must Y or N"<<endl;
                        cin>>input;
                    }
                }
                else if (numShip(board,row)==0){
                    cout<<"Enter Y to quit"<<endl;
                    cin>>input;
                    while (input!='Y'){
                        cout<<"You must enter Y"<<endl;
                        cin>>input;
                    }
                }
                x++;
                }while(x<=40&&input!='Y');
            break;
        }
        case 'H':{
            int x=1;
                do
                {
                    visual(board,row);
                    cout<<"Enter the letter coordinate..."<<endl;
                    cin>>pos2;
                    int colmns=(toupper(pos2)-65);
                    cout<<"Enter the number coordinate..."<<endl;
                    cin>>pos1;
                    while(pos1<0||pos1>=11){
                        cout<<"Enter a valid coordinate"<<endl;
                        cin>>pos1;
                    }

                    if(aslt(board,row,pos1,colmns)){//Assaulting the ship
                            cout<<"Hit!"<<endl;
                        }
                    else{
                            cout<<"Miss!"<<endl;
                    }
                    cout<<"Number of spots left: "<<numShip(board,row)<<endl;
                    if(numShip(board,row)!=0){
                    cout<<"Do you want to surrender (y/n)? "<<endl;
                    cin>>input;
                    while (input!='Y'&&input!='N'){
                        cout<<"You must Y or N"<<endl;
                        cin>>input;
                        }
                    }
                    else if (numShip(board,row)==0){
                        cout<<"Enter Y to quit"<<endl;
                        cin>>input;
                        while (input!='Y'){
                            cout<<"You must enter Y"<<endl;
                            cin>>input;
                        }
                    }
                    x++;
                }while(x<=30&&input!='Y');
            break;
        }
        case 'P':{
            int x=1;
                do
                {
                    visual(board,row);
                    cout<<"Enter the letter coordinate..."<<endl;
                    cin>>pos2;
                    int colmns=(toupper(pos2)-65);
                    cout<<"Enter the number coordinate..."<<endl;
                    cin>>pos1;
                    while(pos1<0||pos1>=11){
                        cout<<"Enter a valid coordinate"<<endl;
                        cin>>pos1;
                    }

                    if(aslt(board,row,pos1,colmns)){//Assaulting the ship
                            cout<<"Hit!"<<endl;
                        }
                    else{
                            cout<<"Miss!"<<endl;
                    }
                    cout<<"Number of spots left: "<<numShip(board,row)<<endl;
                    if(numShip(board,row)!=0){
                    cout<<"Do you want to surrender (y/n)? "<<endl;
                    cin>>input;
                    while (input!='Y'&&input!='N'){
                        cout<<"You must Y or N"<<endl;
                        cin>>input;
                        }
                    }
                    else if (numShip(board,row)==0){
                        cout<<"Enter Y to quit"<<endl;
                        cin>>input;
                        while (input!='Y'){
                            cout<<"You must enter Y"<<endl;
                            cin>>input;
                        }
                    }
                    x++;
                }while(x<=20&&input!='Y');
            break;
        }
    }
        cout<<"Game over!"<<endl;
    return 0;

}

void initializeBoard(char board[][col],int r){
    for (int i=0;i<r;i++){
        for(int j=0;j<col;j++){
                board[i][j]='0';
        }
    }

}

int numShip(const char board[][col],const int &r){
    int c = 0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<col;j++)
                {
                    if(board[i][j]=='1')
                         c++;
                }
        }
        return c;
}

void spnShip(char board[][col],int r){
       int map=rand()%10;
       ifstream read;
       switch (map){
           case 0:{
            read.open("map1.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
            break;
           }
           case 1:{
               read.open("map2.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 2:{
               read.open("map3.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 3:{
               read.open("map4.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 4:{
               read.open("map5.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 5:{
               read.open("map6.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 6:{
               read.open("map7.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 7:{
               read.open("map8.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 8:{
               read.open("map9.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
           case 9:{
               read.open("map10.txt");
            for(int i=0;i<r;i++){
                for(int j=0;j<col;j++){
                    read>>board[i][j];
                }
            }
            read.close();
               break;
           }
       }
}

bool aslt(char board[][col],int r,int x,int y){
    if(board[x][y] == '1')
        {
            board[x][y] = 'H';
            return true;
        }
    
    board[x][y] = 'M';
    return false;
}

void visual(char board[][col],int r){
    cout<<"  A B C D E F G H I J"<<endl;
    for (int i=0;i<r;i++){
        cout<<i<<" ";
        for(int j=0;j<col;j++){
            if(board[i][j] == '1')
                cout<<'0'<<setw(2);
                
            else{
                cout<<board[i][j]<<setw(2);
            }
        }
        cout<<"\n";
    }
}