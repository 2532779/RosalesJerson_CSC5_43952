/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 4, 2015, 2:04 PM
 * Purpose" BlackJack Game
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float dealhnd();

//Execution Begins here
int main(int argc, char** argv) {
    //Setting the random seed
    unsigned seed=time(0);
    srand(seed);
    //Declare variables
    unsigned int card1;//Holding first card
    unsigned int a,b,c,d;//For the functions
    char deal;
    cout<<"Welcome to BlackJack!"<<endl;
    cout<<"Enter D or d to deal a hand"<<endl;
    dealhnd(); 
    //do {
    //   cin>>deal;
    //}while (deal=='D'||deal=='d');
    

    return 0;
}
float dealhnd(){
    int card1,card2,card3,card4;
    card1=rand()%13+1;
    cout<<card1<<endl;
    
}
