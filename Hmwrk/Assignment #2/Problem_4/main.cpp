/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *Created on March 15, 2015, 8:34 PM
 * Purpose:Average Rainfall in 3 Months
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Name of month 1,2,3;rainfall of month 1,2,3
    //Average as well
    string nm1,nm2,nm3;
    float m1,m2,m3,avg;
    //Input the information
    cout<<"Type name of Month 1:"<<endl;
    cin>>nm1;
    cout<<"Type rainfall in inches xx.x"<<endl;
    cin>>m1;
    cout<<"Type name of Month 2:"<<endl;
    cin>>nm2;
    cout<<"Type rainfall in inches xx.x"<<endl;
    cin>>m2;
    cout<<"Type name of month 3:"<<endl;
    cin>>nm3;
    cout<<"Type rainfall in inches xx.x"<<endl;
    cin>>m3;
    avg=(m1+m2+m3)/3;
    //Output The results
    cout<<"In the month of "<<nm1<<" there was "<<m1<<" inches of rain"<<endl;
    cout<<"In the month of "<<nm2<<" there was "<<m2<<" inches of rain"<<endl;
    cout<<"In the month of "<<nm3<<" there was "<<m3<<" inches of rain"<<endl;
    cout<<setprecision(1)<<fixed;
    cout<<"Average rainfall: "<<avg<<" inches"<<endl;
    

    return 0;
}

