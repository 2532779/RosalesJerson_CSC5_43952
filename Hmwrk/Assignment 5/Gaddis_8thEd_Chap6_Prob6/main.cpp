/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 11, 2015, 10:01 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float kinEngy(float,float);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float mass,vel,total;
    //Prompt user for inputs
    cout<<"What is the mass of the object?"<<endl;
    cin>>mass;
    cout<<"What is the velocity in meters/seconds of the object?"<<endl;
    cin>>vel;
    total= kinEngy(mass,vel);
    //Output the results
    cout<<"The total Kinetic Energy of the object is "<<total<<endl;
    

    return 0;
}

float kinEngy(float m,float v){
    float kE;
    kE=.5*m*(v*v);
    return kE;
}