/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 4, 2015, 9:55 AM
 * Purpose: Homework problem for number 10!
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins

int main(int argc, char** argv) {
    float mil,gal,mpg;//Miles,Gallons,MPG
    mil=375;//How many miles on a full tank
    gal=15;//How many gallons the tank can hold
    mpg=mil/gal;
    cout<<"The car can drive "<<mpg<<" MPG!"<<endl;
    return 0;
}

