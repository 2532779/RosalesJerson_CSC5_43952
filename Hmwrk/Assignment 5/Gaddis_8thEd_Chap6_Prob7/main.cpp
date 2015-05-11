/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *
 * Created on May 11, 2015, 10:17 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float celsius(float);
//Execution Begins here

int main(int argc, char** argv) {
    //Declare variables
    float temp,convert;
    //Prompt user for input
    cout<<"What is the farhenhiet number you wish to convert"<<endl;
    cin>>temp;
    convert=celsius(temp);
    //Output the results
    cout<<"The Conversion is "<<convert<<" Celsius"<<endl;

    return 0;
}

float celsius(float f){
    float c;
    c=(.55)*(f-32);
    return c;
}