/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 20, 2015, 9:05 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float blnPmnt(float,float,int,float);//For-Loop

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float purPrce=1e4f;//$10k
    float dwnPymt=1e-1f;//Down pAyment percent of purchase price
    float intRate=3.29e-2;//Interest rate per year
    int   nMnths=60;//Number of months
    float mnPmnt=1.6543e2f;//Monthly Payment
    //Calculate the amount to finance
    float finance=purPrce*(1-dwnPymt);
    //Output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Purchase Price    = $"<<purPrce<<endl;
    cout<<"Down Payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     = "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance = "<<nMnths<<endl;
    cout<<"Amount Financed   = "<<finance<<endl;
    //Balloon Payment and Monthly Payment
    cout<<"Monthly Payment   = $"<<mnPmnt<<endl;
    cout<<"Balloon Payment   = $"<<blnPmnt(finance,intRate/12,nMnths,mnPmnt)<<endl;
    //Exit Stage Right
    return 0;
}
//Balloon Payment Function
//Input
//  f->Financed Amount
//  i->Interest Rate per month
//  n->Number of months 
//  p->Monthly Payment
//Output
//  bln->Balloon Payment in $'s
float blnPmnt(float f,float i,int n,float p){
    for (int month=1;month<n;month++){
        f*=(1+i);//Increase due to the interest rate
        f-=p;    //Decrease due to payment
    }
    return f;    //Balloon Payment
}