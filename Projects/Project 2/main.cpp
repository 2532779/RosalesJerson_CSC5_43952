 
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
#include <fstream>
#include <string>

using namespace std;

//User Libraries

//Global Constants
const int row=10;//Number of rows
const int col=10;//Number of columns
const int numships=5;//NUmber of Battleship
char board[row][col];

//Function Prototypes
void clear();//Board
void users();//Getting the users or returning players
int numShip();//Number of ships function
void spnShip();//Spawning the Ships
bool aslt(int,int);//The Assault on the ships
void visual();//Visual To help determine coordinates
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    int pos2;//Entering position of ships
    char input,pos1;//Input for surrendering&&coordinate
    srand(time(0));//Setting time
    users();//Getting Users
    clear();//Setting board
    spnShip();//Spawning Ships
    out.open("NumOfShip.doc");//Opening file
    visual();//Visual to see the board easier
    do
        {
                cout<<"Enter the letter coordinate coordinate..."<<endl;
                cin>>pos1;
                int colmns=(pos1-65);
                while(colmns<0||colmns>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos1;
                }
                cout<<"Enter the number coordinate..."<<endl;
                cin>>pos2;  
                while(pos2<0||pos2>=11){
                    cout<<"Enter a valid coordinate"<<endl;
                    cin>>pos2;
                }
                if(aslt(pos2,colmns))//Assaulting the ship
                        cout<<"Hit!"<<endl;
                else
                        cout<<"Miss!"<<endl;
                cout<<"Number of ships left: "<<numShip()<<endl;
                //Putting number of ships to a file
                out<<"The Number of ships lefts are.."<<numShip()<<endl;
                //-----------------------------------------
                for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    board[i][j] = '0';
                    }  
                }
                board[pos2][colmns] = 'X';
                cout<<"  A B C D E F G H I J"<<endl;
                for(int i=0;i<10;i++){
                    cout<<i<<" ";
                    for(int j=0;j<10;j++){
                        cout<<board[i][j]<<" ";       
                    }
                    cout<<"\n";
                }
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
    cout<<"  A B C D E F G H I J"<<endl;
    for (int i=0;i<row;i++){
        cout<<i<<" ";
        for(int j=0;j<10;j++){
            cout<<board[row][col]<<setw(2);    
        }
        cout<<"\n";
    }
}


void users(){
    string name;
    char ansr;
    ofstream player;
    cout<<"Are you a new or returning player?(Y/N)"<<endl;
    cin>>ansr;
    switch (ansr){
        case 'Y':{
            cout<<"Enter your Username for the game!"<<endl;
            player.open("Username.txt");
            cin>>name;
            player<<name;
            player.close();
            break;
        }
        case 'N':{
            cout<<"Enter your Username to begin!"<<endl;
            break;
        }
    }

}
