/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 9, 2015, 10:20 AM
 * Purpose:To see how many snickers it takes to survive on
 */
//System Libraries
#include <iostream>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    
   //Declare Variables
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRfem,BMRMale,nCBars;
    //Prompt The User for Imput
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"ALL inputs are integers!"<<endl;
    cout<<"Input your weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input you height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in years"<<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f? one character inputs"<<endl;
    cin>>mf;        
    //Calculates
    BMRfem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRfem/cBar));
    //Output the results
    cout<<"Your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<"(inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per/day"<<endl;
    
    

    return 0;
}

