/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 4, 2015, 8:23 AM
 * Purpose: 2nd Homework Problem
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Libraries
unsigned char CNVPCT =100;

//Function Prototypes

//Execution begins


int main(int argc, char** argv) {
    //Declare varaibles
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Assigned Vales
    nCust=16500;//Number of customers
    pEDrnks=15;//Percentage Energy Drinkers
    pCDrnks=58;//Percentage out of Energy Drinkers
    //Proces/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survery Problem"<<endl;
    cout<<"Known/Given Values"<<endl;
    cout<<"Number of customers = "<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "
            <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage of Citrus Drinkers/ Energy Drinkers = "
            <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit Stage Right
            

    return 0;
}

