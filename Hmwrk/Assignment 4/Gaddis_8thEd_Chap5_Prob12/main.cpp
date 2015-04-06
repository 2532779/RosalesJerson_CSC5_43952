/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 6, 2015, 4:43 PM
 * Purpose:Converting Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float cEl,fAhr;
    cout<<"Celsius"<<"      "<<"Fahrenheit"<<endl;
    cout<<"----------------------------------"<<endl;
    for(cEl=1;cEl<=20;cEl++)
    {
        fAhr=(1.8*cEl)+32;
        cout<<"   "<<cEl<<"             "<<fAhr<<endl;
    }

    return 0;
}

