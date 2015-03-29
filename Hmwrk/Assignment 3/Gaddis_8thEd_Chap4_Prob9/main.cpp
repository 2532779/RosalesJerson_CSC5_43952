/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 26, 2015, 10:04 AM
 * Purpose:Change-Counting Game
 */

//System Libraries
#include <iostream>

using namespace std;
//user Libraries

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    //Declare Variables
    int pen=1,nik=5,dim=10,qrt=25,numpen,numnik,numdim,numqrt;
    int ttlnum;
    //Prompt User for inputs
    cout<<"Type in number of pennies:"<<endl;
    cin>>numpen;
    cout<<"Type in number of nickels:"<<endl;
    cin>>numnik;
    cout<<"Type in number of dimes:"<<endl;
    cin>>numdim;
    cout<<"Type in number of quarters:"<<endl;
    cin>>numqrt;
    //Calculations
    ttlnum=(pen*numpen)+(nik*numnik)+(dim*numdim)+(qrt*numqrt);
    //If else
    if (ttlnum<100)
        cout<<"You didn't win the game"<<endl;
    else if (ttlnum==100)
        cout<<"You win the game!"<<endl;
    else if (ttlnum>100)
        cout<<"You didn't win the game"<<endl;
    else
        cout<<"Type in appropriate values!"<<endl;
    return 0;
}

