/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 17, 2015, 2:16 PM
 * Purpose:Program to Determine how much ingredients to make cookies
 */

#include <iostream>
#include <iomanip>

//System Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Cups of Sugar,Butter,Flour,and Total Cookies
    float cS=1.5,cB=1,cF=2.75,tC=48; 
    //Cookie input and Calculations for cookies
    float cI,cC;
    //New Cups of sugar,butter,and flour
    float ncS,ncB,ncF;
    //Prompt User to input how many cookies they want to make
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cI;
    //Calculation for Cookies
    cC=cI/tC;
    ncS=cS*cC;
    ncB=cB*cC;
    ncF=cF*cC;
    //Output The results!
    cout<<"Total Number of Cookies: "<<cI<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Total cups of sugar: "<<setw(8)<<ncS<<endl;
    cout<<"Total cups of butter: "<<setw(7)<<ncB<<endl;
    cout<<"Total cups of flour: "<<setw(8)<<ncF<<endl;
    return 0;
}

