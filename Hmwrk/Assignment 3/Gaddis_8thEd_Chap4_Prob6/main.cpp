/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 25, 2015, 8:29 PM
 * Purpose:Calculating newton! of an object!
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float weigt,mass;
    //Prompt user for inputs
    cout<<"Enter the mass of the object: "<<endl;
    cin>>mass;
    //Calculations
    weigt=mass*9.8;
    //If else
    if (weigt>1000)
        cout<<"The object is to heavy!"<<endl;
    else if (weigt<10)
        cout<<"The object is to light!"<<endl;
    else
        cout<<"The object is just the right weight!"<<endl;
                
                
    
    

    return 0;
}

