/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 2, 2015, 3:57 PM
 * Purpose:Ocean Level Rising
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //Declare Variables
    float miL=1.5;
    unsigned short yrs;
    //Loop
    for(yrs=1;yrs<=25;yrs++)//for loop for 25 years
        //Output and calculations
        cout<<"Year: "<<yrs<<"  Milliliters: "<<(miL*yrs)<<endl;      
    return 0;
}

