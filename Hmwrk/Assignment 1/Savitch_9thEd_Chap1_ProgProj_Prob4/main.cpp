/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 2, 2015, 9:04 AM
 * Purpose: Free Fall problem from Savitch
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global COnstants
const float G=3.2174e1f;//Acceleration in ft/sec^2 on
const float CNVFTMT=3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables
    float time,dstnce;
    //Prompt for time 
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the Distance
    dstnce=.5f*G*time*time;
    //Out the results
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<"(meters)"<<endl;
    //Exit Stage right!
    
           
           
   

    return 0;
}

