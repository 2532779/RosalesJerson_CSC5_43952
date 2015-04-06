/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 6, 2015, 1:27 PM
 * Purpose:Pennies for pay
 */

//System Libraries
#include <iostream>

using namespace std;

//User libraries

//Global Constants
unsigned short CVTPCT=100;

//Function Prototypes

//Execution Begins here

int main(int argc, char** argv) {
    //Declare Variables
    float days,pen=1;
    //Prompt user for input
    cout<<"How many days are you going to work this week?"<<endl;
    cin>>days;
    //Input validation
    while (days<=0)
    {
        cout<<"ERROR enter a number great than zero"<<endl;
        cin>>days; 
    }
    //Output the results
    cout<<"   Day"<<"        "<<"Total"<<endl;
    cout<<"------------------------------"<<endl;
    //For loop
    for (unsigned short cnt=1;cnt<=days;cnt++)
    {
        cout<<"   "<<cnt<<"           "<<"$"<<pen/static_cast<float>(CVTPCT)
        <<endl;
        pen*=2;
    }
    

    return 0;
}

