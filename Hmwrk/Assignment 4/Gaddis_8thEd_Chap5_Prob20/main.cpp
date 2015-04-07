/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 7, 2015, 12:46 PM
 * Purpose:Guessing Game
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants
unsigned short minval=1,maxval=25;//Minimum Addition and Subtraction Values

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
        
        //Declare variables
        char again;
        unsigned short num1,gues;
        //System time
        unsigned seed = time(0);
        //Seed random number generator
        srand(seed);
        do{
        cout<<"This is a guessing game, Enter a number (1-25)!"<<endl;
        num1=(rand()%(maxval-minval+1))+minval;
        cin>>gues;
        do{
        if (gues<num1)
        {
            cout<<"Try again your to low,Pick a Higher number!"<<endl;
            cin>>gues;
        }
        if (gues>num1)
        {
            cout<<"Try again your to high,Pick a Lower Number!"<<endl;
            cin>>gues;
        }
        }while (gues!=num1);
        
            cout<<"You win!"<<endl;
            cout<<"Do you want to play again?(Y/N)"<<endl;
            cin>>again;
        }while(again=='Y'||again=='y');
        

    return 0;
}

