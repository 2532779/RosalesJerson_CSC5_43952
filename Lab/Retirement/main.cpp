/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 20, 2015, 8:13 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float rtirmnt(float,float,int,float);//For-Loop

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float pv=0.0f;//Present Value $'s
    float ir=0.05f; //Interest Rate %/yr
    float fdep=0.1f;//Babylonians say 10
    float salary=36000;//Salary $/Year
    //Calculate our savings Required
    float savReq=salary/ir;//Savings Require $'s
    //Output all initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Investment Rate from MuniBonds = "<<ir*100<<"%"<<endl;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Yearly Retirement Saved = $"<<salary*fdep<<endl;
    cout<<"Savings Required to Retire = $"<<savReq<<endl;
    cout<<endl<<"Year  Ret Savings"<<endl;
    float retSav=0.0f;
    //Output our yearly ret savings
    for(int year=1;retSav<savReq;year++){
        retSav=rtirmnt(pv,ir,year,salary*fdep);
        cout<<setw(4)<<year<<setw(11)<<retSav<<endl;
    }
    return 0;
}

//Function for Future Value Calculation
//inputs
//     p-> Present Value $'s
//     i-> Interest Rate %/Compounding Period
//     n-> Compounding Period yr's
//     d->Deposit yearly
//outputs
//     fv-> Future Value $'s

float rtirmnt(float p,float i,int n,float d){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}

