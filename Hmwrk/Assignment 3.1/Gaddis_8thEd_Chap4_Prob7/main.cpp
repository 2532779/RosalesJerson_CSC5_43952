/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 26, 2015, 9:24 AM
 * Purpose:Time Converter!
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned char MNTS=60;
unsigned short HRS=3600;
unsigned long DYS=86400;


//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    //Declare Variables
    float sec,min,hrs,days;
    cout<<"This Program Converts seconds to min,hours,or days."<<endl;
    cout<<"Your Range is to 10^38!"<<endl;
    //Prompt User for Inputs
    cout<<"Enter the number of seconds you wish to convert."<<endl;
    cin>>sec;
    //Calculations
    min=sec/MNTS;
    hrs=sec/HRS;
    days=sec/(static_cast<float>(DYS));
    //if else
    cout<<setprecision(2)<<fixed<<showpoint;
    if (sec>=60&&sec<3600)
        cout<<"There are "<<min<<" minutes in "<<sec<<" seconds!"<<endl;  
    else if (sec>=3600&&sec<86400)
        cout<<"There are "<<hrs<<" hours in "<<sec<<" seconds!"<<endl;
    else if (sec>=86400)
        cout<<"There are "<<days<<" days in "<<sec<<" seconds!"<<endl;
    else
        cout<<"Enter a number greater than or equal to 60!"<<endl;
    return 0;
}

