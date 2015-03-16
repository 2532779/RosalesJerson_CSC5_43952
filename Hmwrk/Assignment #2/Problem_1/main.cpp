/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 12, 2015, 11:25 AM
 * Purpose:Solution to Number 1 Gaddis!
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float mpg,mil,gal;
    cout<<"Enter Miles in xx.xx driven:"<<endl;
    cin>>mil;
    cout<<"Enter Gallons in xx.xx used:"<<endl;
    cin>>gal;
    mpg=mil/gal;
    cout<<"Total Miles: "<<mil<<endl;
    cout<<"Total Gal: "<<gal<<endl;
    cout<<"MPG: "<<mpg<<endl;
           return 0;
}

