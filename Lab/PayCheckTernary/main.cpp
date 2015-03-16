/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 16, 2015, 8:11 AM
 * Purpose:Paycheck Ternary
 */
//System Libraries
#include <iostream>//I/o Standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in a file
    float hrsWkd;//Hours Worked
    float payRate;//Pay rate ($'s/Hr)
    float oRate=1.5;//Multiplicative Factor of payRate
    float oTime=40;//Where overtime Begins(hr)
    float payChk;//Gross Pay in ($'s)
    //Open File
    out.open("Payroll.dat");
    //Prompt User for Input
    cout<<"How Many Hours This week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your Pay Rate? ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the Paycheck
    payChk=hrsWkd<oTime?
        payRate*hrsWkd:
        payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //Output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"PayRate = $"<<payRate<<"(hr)"<<endl;
    cout<<"Overtime Rate = "<<oRate<<endl;
    cout<<"Overtime begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"PayRate = $"<<payRate<<"(hr)"<<endl;
    out<<"Overtime Rate = "<<oRate<<endl;
    out<<"Overtime begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    //Close FIle
    out.close();
    return 0;
}

