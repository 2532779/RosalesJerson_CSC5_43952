/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 25, 2015, 8:16 PM
 * Purpose:To Calculate BMI
 */

//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float weigt,heigt,bmI;
    //Prompt user for inputs
    cout<<"Enter your weight in lbs such as xx.xx!"<<endl;
    cin>>weigt;
    cout<<"Enter your height in inches as xx.xx!"<<endl;
    cin>>heigt;
    //Calculations
    bmI=(weigt*703)/(heigt*heigt);
    //if else
    if (bmI>=18.5&&bmI<=25)
        cout<<"You have optimal weight!"<<endl;
    else if (bmI<18.5)
        cout<<"You are under weight!"<<endl;
    else if (bmI>25)
        cout<<"You are over weight!"<<endl;
    else
        cout<<"Enter valid inputs!"<<endl;
               
            
    
    

    return 0;
}

