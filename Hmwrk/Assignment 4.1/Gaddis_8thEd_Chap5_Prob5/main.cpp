/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 5, 2015, 7:35 PM
 * Purpose: Increase rates for Country Club
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVTPCT=100;

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short yrs=1,yrsRte,inT,strt=2500,ttl;
    cout<<"Increased Rates for Country Club up to Year 6:"<<endl;
    cout<<endl;
    cout<<"Year"<<"      "<<"Amount"<<endl;
    cout<<"--------------------------"<<endl;
    //Loop
    while (yrs<=6)
    {
        //Calculations
        inT=2500.0f*(4/static_cast<float>(CNVTPCT));
        yrsRte+=inT;
        ttl=yrsRte+strt;
        //Output
        cout<<"Year: "<<yrs<<"   Amount: $"<<ttl<<endl;
        yrs++;
    }
        

    return 0;
}

