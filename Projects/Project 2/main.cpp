 
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
#include <cctype>

using namespace std;

//User Libraries

//Global Constants
const int row=10;//Number of rows
const int col=10;//Number of columns
const int numships=5;//Number of Battleship

//Function Prototypes
void users(int);//Getting the users or returning players
int numShip(char [][col],int);//Number of ships function
void spnShip(char [][col],int);//Spawning the Ships
bool aslt(char [][col],int,int,int);//The Assault on the ships
void visual(char [][col],int);//Visual To help determine coordinates
void initializeBoard(char [][col],int);//Fills board with 0's
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variable
    //users(2);
    char board[row][col];
    int pos1;//Entering position of ships
    char input,pos2;//Input for surrendering&&coordinate
    srand(time(0));//Setting time
    //users();//Getting Users
    initializeBoard(board,row);//Getting the board to fill with zeros
    spnShip(board,row);//Spawning Ships
    do
    {
                visual(board,row);
                cout<<"Enter the letter coordinate coordinate..."<<endl;
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
                cout<<"Number of ships left: "<<numShip(board,row)<<endl;
                if(numShip(board,row)!=0){
                    cout<<"Do you want to surrender (y/n)? "<<endl;
                    cin>>input;
                    while (input!='y'&&input!='n'){
                        cout<<"You must enter lower case y or n"<<endl;
                        cin>>input;
                    }
                }
                else if (numShip(board,row)==0){
                    cout<<"Enter y to quit"<<endl;
                    cin>>input;
                    while (input!='y'){
                        cout<<"You must enter lower case y"<<endl;
                        cin>>input;
                    }
                }
    }while(input!='y');
        //writeFile(name, score);
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

int numShip(char board[][col],int r){
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
    
    int s = 0;
        while(s < numships)
        {
                int x=rand()%r;
                int y=rand()%col;
                if(board[x][y]!= '1')
                {
                        s++;
                        board[x][y] = '1';
                }
                
                cout << "ship " << s + 1 << " (x, y): " << x << " " << y << endl;
        }
}

bool aslt(char board[][col],int r,int x,int y){
    cout << "*board[" << x << "][" << y << "]\n";
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

//void users(int score){
//    string name;
//    char ansr;
//    ofstream fileName;
//    cout<<"Are you a new player?(Y/N)"<<endl;
//    cin>>ansr;
//    switch (toupper(ansr)){
//        case 'Y':{
//            cout<<"Enter your 3 character name for the game!"<<endl;
//            fileName.open("Username.txt", ios::app);
//            //cin.getline(name, 3);
//            cin >>name;
//            //writeFile(name, score);
//            fileName << name<< " " << score << endl;
//           //player
//            fileName.close();
//            break;
//        }
//        case 'N':{
//            cout<<"Enter your Username to begin!"<<endl;
//            cout << "Enter your 3 character name: "; //Tao
//            char letters[3]; //Tao
//            cin.getline(letters, 3);
//            string playerName;
//            int tempScore, number;
//            name = (string)letters;
//            bool found = false;
//
//            fileName.open("Username.txt");
//            if(fileName.fail()) {
//                cout << "Error opening a file\n";
//                exit(0);
//            }
//            else {
//                while(!fileName.eof()){
//                    //fileName >> playerName >> number;
//
//                    if(name == fileName){
//                        tempScore = number;
//
//                        cout << "Name found" << fileName;
//                        found = true;
//                    }
//                }
//            }
//        }
//            break;
//        }
//    }
    
    
