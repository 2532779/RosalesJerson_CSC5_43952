/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 8, 2015, 7:56 AM
 * Purpose:Fried Twinkie
 */


//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=80;
    char input[SIZE]="";
    unsigned short totChng=0,pTwnke=350;
    char nQtrs,nDimes,nNikels;
    //Prompt User for input
    cout<<"This is a Fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkie Cost $3.50"<<endl;
    cout<<"Input your change as"<<endl;
    cout<<"Dollar, Quarter, Dime, Nickels"<<endl;
    do{
        cout<<"Input coins/change"<<endl;
        cin>>input;
        if (strcmp(input,"Dollar")==0){
            totChng+=100;
        }else if (strcmp(input,"Quarter")==0){
            totChng+=25;
        }else if (strcmp(input,"Dime")==0){
            totChng+=10;
        }else if (strcmp(input,"Nickel")==0){
            totChng+=5;
        }else {
            cout<<"No Slugs Allowed"<<endl;
        }
        //Format
        cout<<fixed<<setprecision(2)<<showpoint<<endl;
        cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<pTwnke);
    //Give Twinkie
    cout<<endl<<"Here is your fried Twinkie"<<endl;
    //Calculate the change
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How many Quarters
    nQtrs=totChng/25;
    if (nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    //How many Dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if (nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //How many Nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if (nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
    //Exit Stage Right
    
    return 0;
}

