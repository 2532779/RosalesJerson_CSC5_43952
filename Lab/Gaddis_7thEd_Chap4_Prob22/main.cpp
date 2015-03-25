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
    float vwdHrs;//Hours viewed
    char package;//Package AaBbCc
    const int SIZE=40;//Max Size of name = 39 Characters
    char name[SIZE];//Customer Name
    float bill;// Cable Bill in ($'s)
    //Open File
    out.open("Cable.dat");
    //Prompt User for Input
    cout<<"How many Hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your Package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //Calculate the Paycheck
    switch(package){
        case 'A':
        case 'a':{
            bill=9.95;
            if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
        }
        case'B':
        case'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=2*(vwdHrs-20);
            break;
        }
        case'C':
        case'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong Package Chosen:"<<endl;
        
    };
    
    //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your Cable Bill from CSC5 RCC Programming Class"<<endl;
    out<<"Customer Name = "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Amount Owed: "<<bill<<endl;
    //Close FIle
    out.close();
    return 0;
}
