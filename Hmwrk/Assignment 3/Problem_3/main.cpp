/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 25, 2015, 6:45 PM
 * Purpose:To tell if your Birthday is a magic date!
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution begins
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short moth,day,yr;
    //Prompt User for inputs
    cout<<"This program is to see if your birth date is a magic date!"<<endl;
    cout<<"Input month in numbers"<<endl;
    cin>>moth;
    cout<<"Input day in numbers as well"<<endl;
    cin>>day;
    cout<<"Input the last two digits of your year"<<endl;
    cin>>yr;
    //if else statement
    if (moth*day==yr)
        cout<<"You have a magic date!"<<endl;
    else
        cout<<"You don't have a magic date!"<<endl;
    
    

    return 0;
}

