/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 15, 2015, 7:31 PM
 * Purpose:Calculation Softball ticket sales 
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    //Seat A Cost is 15,Seat B Cost is 12,Seat C cost is 9
    unsigned char stAC=15,stBC=12,stCC=9;
    //Variables for inputs
    unsigned short stA,stB,stC;
    //Variables for total 
    float t1,t2,t3,fT;
    cout<<"Number of seats sold for Class A:"<<endl;
    cin>>stA;
    t1=stA*stAC;
    cout<<"Number of seats sold for Class B:"<<endl;
    cin>>stB;
    t2=stB*stBC;
    cout<<"Number of seats sold for Class C:"<<endl;
    cin>>stC;
    t3=stC*stCC;
    fT=t1+t2+t3;
    cout<<setprecision(2)<<fixed;
    cout<<"Class A Seats: $"<<stA<<endl;
    cout<<"Class B Seats:"<<stB<<endl;
    cout<<"Class C Seats:"<<stC<<endl;
    cout<<"Total Sales:"<<fT<<endl;
    
    
    
    

    return 0;
}

