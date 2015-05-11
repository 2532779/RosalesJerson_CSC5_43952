/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 11, 2015, 9:23 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float falldis(float);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float d;
    //Telling user the input
    cout<<"Im going to put in time in (sec) from 1-10 and I'm going to "
            "display the result"<<endl;
    //Starting Table
    cout<<"Seconds "<<"  "<<"Distance "<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    //For loop to get the 10 results
    for(int i=1;i<=10;i++){
        d=falldis(i);
        cout<<i<<"         "<<d<<endl;
    }

    return 0;
}

float falldis(float t){
    float g=9.8,d;
    d=.5*g*(t*t);
    return d;
}