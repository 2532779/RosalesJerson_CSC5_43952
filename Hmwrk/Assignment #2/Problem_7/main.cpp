/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 17, 2015, 4:43 PM
 * Purpose:To Calculate $ earned in movie theater
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution begins!



int main(int argc, char** argv) {
    //Declare Variables 
    //Movie Name
    string nM;
    //Variables for Adult tickets and Children tickets and Costs plus totals
    unsigned short nA,nC,cA=10,cC=6,taT,tcT;
    //Variables for Gross,Net, amount paid to distributor,total gross
    float gboP,nboP,amtDist;
    //Variables for net 
    //Prompt User for inputs
    cout<<"What is the name of the movie?"<<endl;
    getline(cin,nM);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>nA;
    cout<<"How many children tickets sold?"<<endl;
    cin>>nC;
    //Calculations
    taT=nA*cA;
    tcT=nC*cC;
    gboP=taT+tcT;
    nboP=(gboP)*(20/static_cast<float>(CNVPCT));
    amtDist=gboP-nboP;
    //Output the results
    cout<<"Name of Movie: "<<setw(17)<<nM<<endl;
    cout<<"Adult tickets sold: "<<setw(12)<<nA<<endl;
    cout<<"Child ticket sold: "<<setw(13)<<nC<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Gross Box office Profits: "<<setw(3)<<"$"<<gboP<<endl;
    cout<<"Net Box Office Profit: "<<setw(6)<<"$"<<nboP<<endl;
    cout<<"Amount Paid to Distributor: "<<"$"<<amtDist<<endl;
   
  return 0;
}

