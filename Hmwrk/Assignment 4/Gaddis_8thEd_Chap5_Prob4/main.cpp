/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 2, 2015, 3:57 PM
 * Purpose:Calories burned on a treadmill
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //Declare Variables
    float caL=3.6;
    unsigned short min=5;
    //Loop
    while (min<=30)
    {
        cout<<"Minute: "<<min<<"   Calories Burned: "<<(caL*min)<<endl;
        min+=5;
    }
    return 0;
}

